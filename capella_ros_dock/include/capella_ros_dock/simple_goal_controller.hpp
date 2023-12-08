

#ifndef CAPELLA_ROS_DOCK__SIMPLE_GOAL_CONTROLLER_HPP_
#define CAPELLA_ROS_DOCK__SIMPLE_GOAL_CONTROLLER_HPP_

#include <deque>
#include <functional>
#include <mutex>
#include <vector>

#include "angles/angles.h"
#include "boost/optional.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "capella_ros_dock/behaviors_scheduler.hpp"
#include "capella_ros_dock/behaviors_scheduler.hpp"
#include "tf2/utils.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include <chrono>
#include <time.h>
#include <rclcpp/time.hpp>
#include <capella_ros_msg/msg/velocities.hpp>
#include "rclcpp/rclcpp.hpp"
#include "capella_ros_dock/utils.hpp"
#include <inttypes.h>
#include <nav_msgs/msg/odometry.hpp>

using namespace std;

namespace capella_ros_dock
{


/**
 * @brief This class provides an API to give velocity commands given a goal and robot position.
 */
class SimpleGoalController
{
public:
SimpleGoalController(motion_control_params *params_ptr)
{
	this->params_ptr = params_ptr;
	std::cout << "dock_valid_obstacle_x: " << params_ptr->dock_valid_obstacle_x << std::endl;
	init_params();
}

void init_params()
{
	buffer_goal_point_x = -(params_ptr->last_docked_distance_offset_
	                        + params_ptr->distance_low_speed
	                        + params_ptr->second_goal_distance
	                        + params_ptr->buffer_goal_distance);

	// 0.4461565280195475968735605160853 <= tan(32-arctan2(0.12/(0.32+0.1+0.5))
	thre_angle_diff = std::tan(params_ptr->camera_horizontal_view  * 0.5 / 180.0 * M_PI
	                           - std::atan(0.5 * params_ptr->marker_size / (params_ptr->last_docked_distance_offset_ + params_ptr->distance_low_speed + params_ptr->second_goal_distance))
	                           - params_ptr->angle_delta
	                           );
	RCLCPP_INFO(rclcpp::get_logger("simple_goal_controller"), "thre_angle_diff: %f", thre_angle_diff);
}

/// \brief Structure to keep information for each point in commanded path
//  including pose with position and orientation of point
//  radius that is considered close enough to achieving the point
//  drive_backwards whether the robot should drive backwards towards the point (for docking)
struct CmdPathPoint
{
	CmdPathPoint(tf2::Transform p, float r, bool db)
		: pose(p), radius(r), drive_backwards(db) {
	}
	tf2::Transform pose;
	float radius;
	bool drive_backwards;
};
using CmdPath = std::vector<CmdPathPoint>;

/// \brief Set goal path for controller along with max rotation and translation speed
void initialize_goal(const CmdPath & cmd_path, double max_rotation, double max_translation)
{
	const std::lock_guard<std::mutex> lock(mutex_);
	// Convert path points to goal points
	goal_points_.clear();
	goal_points_.resize(cmd_path.size());
	for (size_t i = 0; i < cmd_path.size(); ++i) {
		GoalPoint & gp = goal_points_[i];
		const tf2::Vector3 & pt_position = cmd_path[i].pose.getOrigin();
		gp.x = pt_position.getX();
		gp.y = pt_position.getY();
		gp.theta = tf2::getYaw(cmd_path[i].pose.getRotation());
		gp.radius = cmd_path[i].radius;
		gp.drive_backwards = cmd_path[i].drive_backwards;
	}
	navigate_state_ = NavigateStates::LOOKUP_ARUCO_MARKER;
}

/// \brief Clear goal
void reset()
{
	const std::lock_guard<std::mutex> lock(mutex_);
	goal_points_.clear();
}

// \brief Generate velocity based on current position and next goal point looking for convergence
// with goal point based on radius.
// \return empty optional if no goal or velocity command to get to next goal point
BehaviorsScheduler::optional_output_t get_velocity_for_position(
	const tf2::Transform & current_pose, bool sees_dock, bool is_docked, bool bluetooth_contact,
	nav_msgs::msg::Odometry odom_msg, rclcpp::Clock::SharedPtr clock_, rclcpp::Logger logger_, motion_control_params* params_ptr, capella_ros_dock_msgs::msg::HazardDetectionVector hazards)
{
	BehaviorsScheduler::optional_output_t servo_vel;
	// if bluetooth_contact is false, just stop, waiting bluetooth to connect;
	if (!bluetooth_contact)
	{
		RCLCPP_INFO(logger_, "stop for waiting bluetooth to be connected.");
		sleep(1);
		servo_vel = geometry_msgs::msg::Twist();
		return servo_vel;
	}
	
	// impl undock (go to undock state)
	if (goal_points_.size() >0 && !(goal_points_.front().drive_backwards))
	{
		RCLCPP_INFO(logger_, "***************** start undock *****************");
		navigate_state_ = NavigateStates::UNDOCK;
		sleep(1); // wait for /charger/stop to execute.
		undocking = true;
	}
	else
	{
		undocking = false;
		start_undock = true;
	}
	
	// RCLCPP_INFO_STREAM(logger_, "simple_goal_controller => max_dock_action_run_time: " << params_ptr->max_dock_action_run_time << " seconds.");
	time_start = std::chrono::high_resolution_clock::now();
	const std::lock_guard<std::mutex> lock(mutex_);
	if (is_docked && !undocking)
	{
		if(first_contacted)
		{
			first_contacted = false;
			first_contacted_time = clock_->now().seconds();
			RCLCPP_DEBUG(logger_, "keep moving until %f expired.", params_ptr->contacted_keep_move_time);
		}
		else
		{
			auto now_time = clock_->now().seconds();
			if ((now_time - first_contacted_time) > params_ptr->contacted_keep_move_time)
			{
				RCLCPP_INFO(logger_, "*************** robot is docked *************");
				goal_points_.clear();
				first_sees_dock = true;
				first_contacted = true;
			}
		}
	}
	if (goal_points_.size() == 0) {
		RCLCPP_INFO(logger_, "*************** goal_points.size() = 0 *************");
		return servo_vel;
	}

	double current_angle;
	tf2::Vector3 current_position;
	if (navigate_state_ >= NavigateStates::ANGLE_TO_GOAL)
	{
		current_angle = tf2::getYaw(current_pose.getRotation());
		current_position = current_pose.getOrigin();
	}

	// stop when has valid hazards
	if(hazards_valid(current_pose, hazards) && navigate_state_ > NavigateStates::ANGLE_TO_X_POSITIVE_ORIENTATION)
	{
		last_time_hazards = clock_->now();
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "stop for hazards.");
		auto distance = std::abs(current_pose.getOrigin().getX());
		RCLCPP_DEBUG(logger_, "distance: %f", distance);
		RCLCPP_DEBUG(logger_, "throttle: %f", params_ptr->dock_valid_obstacle_x);
		servo_vel = geometry_msgs::msg::Twist();
		return servo_vel;
	}
	if(!sees_dock && navigate_state_ > NavigateStates::ANGLE_TO_X_POSITIVE_ORIENTATION)
	{
		last_time_hazards = clock_->now();
		// RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "stop until can see dock.");
		if (std::abs(current_position.getX()) > 0.9)
		{
			navigate_state_ = NavigateStates::ANGLE_TO_X_POSITIVE_ORIENTATION;
			servo_vel = geometry_msgs::msg::Twist();
			return servo_vel;
		}
		else
		{
			RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "robot cann't see the charger,but it is too linear to the charger ,stop moving...");
			servo_vel = geometry_msgs::msg::Twist();
			return servo_vel;
		}
	}
	now_time_hazards = clock_->now();
	if ((now_time_hazards.seconds() - last_time_hazards.seconds()) < params_ptr->time_sleep)
	{
		servo_vel = geometry_msgs::msg::Twist();
		return servo_vel;
	}

	// Generate velocity based on current position and next goal point looking for convergence
	// with goal point based on radius.
	switch (navigate_state_) {
	case NavigateStates::LOOKUP_ARUCO_MARKER:
	{
		RCLCPP_DEBUG(logger_, "------------- LOOKUP_ARUCO_MARKER -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- LOOKUP_ARUCO_MARKER -------------");
		servo_vel = geometry_msgs::msg::Twist();
		if (sees_dock)
		{
			RCLCPP_DEBUG(logger_, "see dock");
			auto current_robot_angle = tf2::getYaw(current_pose.getRotation());
			float dist_angle_to_X_Axis = angles::shortest_angular_distance(current_robot_angle, 0);
			float dist_angle_to_X_Axis_abs = std::abs(dist_angle_to_X_Axis);
			if (dist_angle_to_X_Axis_abs < M_PI && first_sees_dock) // origin 0.05; tmp fix bug : robot is  too linear to marker,when rotate until  < 0.05 ,can not see marker again.
			{
				RCLCPP_DEBUG(logger_, "first see dock.(angle to x positive orientation.)");
				first_sees_dock = false;
				first_sees_dock_time = clock_->now().seconds();
				RCLCPP_DEBUG(logger_, "first see dock time: %f", first_sees_dock_time);
			}
			else
			{
				servo_vel->angular.z = std::copysign(params_ptr->max_rotation, dist_angle_to_X_Axis);
			}


			now_time = clock_->now().seconds();
			if ( !first_sees_dock && (now_time - first_sees_dock_time > params_ptr->localization_converged_time))
			{
				double robot_x = current_pose.getOrigin().getX();
				double robot_y = current_pose.getOrigin().getY();
				float distance_tmp = params_ptr->last_docked_distance_offset_
				                     + params_ptr->distance_low_speed
				                     + params_ptr->second_goal_distance;
				double theta = std::atan2(std::abs(robot_y), std::abs(robot_x) - distance_tmp);
				RCLCPP_DEBUG(logger_, "robot_x: %f", robot_x);
				RCLCPP_DEBUG(logger_, "robot_y: %f", robot_y);
				RCLCPP_DEBUG(logger_, "theta: %f", theta);
				RCLCPP_DEBUG(logger_, "thr_angle_diff: %f", thre_angle_diff);
				if (theta < thre_angle_diff && std::abs(robot_x) > (distance_tmp + params_ptr->deviate_second_goal_x))                                                                                                                                                                      // 0.7 <= 0.5 + 0.2(x_error)
				{
					navigate_state_ = NavigateStates::ANGLE_TO_GOAL;
				}
				else
				{
					dist_buffer_point = std::hypot(robot_x - buffer_goal_point_x,
					                               robot_y - buffer_goal_point_y);
					robot_current_yaw = tf2::getYaw(current_pose.getRotation());
					robot_angle_to_buffer_point_yaw = std::atan2(buffer_goal_point_y - robot_y,
					                                             buffer_goal_point_x - robot_x);

					// decide drive back or not
					theta_positive = angles::shortest_angular_distance(
						angles::normalize_angle(robot_current_yaw + M_PI),
						robot_angle_to_buffer_point_yaw);
					theta_negative = angles::shortest_angular_distance(robot_current_yaw,
					                                                   robot_angle_to_buffer_point_yaw);
					if (std::abs(theta_positive) < std::abs(theta_negative))
					{
						drive_back = false;
						dist_buffer_point_yaw = theta_positive;
					}
					else
					{
						drive_back = true;
						dist_buffer_point_yaw = theta_negative;
					}

					RCLCPP_DEBUG(logger_, "robot_current_yaw: %f", robot_current_yaw);
					RCLCPP_DEBUG(logger_, "robot_angle_to_buffer_point_yaw: %f", robot_angle_to_buffer_point_yaw);
					RCLCPP_DEBUG(logger_, "theta_negative: %f", theta_negative);
					RCLCPP_DEBUG(logger_, "theta_positive: %f", theta_positive);
					RCLCPP_DEBUG(logger_, "dist_buffer_point: %f", dist_buffer_point);
					RCLCPP_DEBUG(logger_, "dist_buffer_point_yaw: %f", dist_buffer_point_yaw);
					pre_time = clock_->now().seconds();
					navigate_state_ = NavigateStates::ANGLE_TO_BUFFER_POINT;
				}
			}
		}
		else
		{
			servo_vel->angular.z = params_ptr->max_rotation;
			RCLCPP_DEBUG(logger_, "can not see dock");
		}
		break;
	}
	case NavigateStates::ANGLE_TO_BUFFER_POINT:
	{
		RCLCPP_DEBUG(logger_, "------------- ANGLE_TO_BUFFER_POINT -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- ANGLE_TO_BUFFER_POINT -------------");
		servo_vel = geometry_msgs::msg::Twist();
		now_time = clock_->now().seconds();
		double dt = now_time - pre_time;

		RCLCPP_DEBUG(logger_, "dt: %f", dt);
		RCLCPP_DEBUG(logger_, "angular.z: %f", odom_msg.twist.twist.angular.z);
		RCLCPP_DEBUG(logger_, "delta_angular: %f", odom_msg.twist.twist.angular.z * dt);
		RCLCPP_DEBUG(logger_, "dist_buffer_point_yaw pre: %f", dist_buffer_point_yaw);
		dist_buffer_point_yaw -= odom_msg.twist.twist.angular.z * dt;
		robot_current_yaw += odom_msg.twist.twist.angular.z * dt;
		RCLCPP_DEBUG(logger_, "dist_buffer_point_yaw now: %f", dist_buffer_point_yaw);
		double angle_dist = dist_buffer_point_yaw;
		RCLCPP_DEBUG(logger_, "angle_dist: %f", angle_dist);
		pre_time = now_time;
		if(std::abs(angle_dist) < params_ptr->tolerance_angle)
		{
			navigate_state_ = NavigateStates::MOVE_TO_BUFFER_POINT;
		}
		else
		{
			bound_rotation(angle_dist, params_ptr->min_rotation, params_ptr->max_rotation);
			if(std::abs(angle_dist) < params_ptr->min_rotation)                                                                                                                                                                                 // 0.1 => 0.8 => raw_vel output 0
			{
				angle_dist = std::copysign(params_ptr->min_rotation, angle_dist);
			}
			servo_vel->angular.z = angle_dist;
			RCLCPP_DEBUG(logger_, "angular.z: %f", angle_dist);
		}
		break;
	}
	case NavigateStates::MOVE_TO_BUFFER_POINT:
	{
		RCLCPP_DEBUG(logger_, "------------- MOVE_TO_BUFFER_POINT -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- MOVE_TO_BUFFER_POINT -------------");
		servo_vel = geometry_msgs::msg::Twist();
		now_time = clock_->now().seconds();
		double dt = now_time - pre_time;
		dist_buffer_point -= dt * std::abs(odom_msg.twist.twist.linear.x);
		pre_time = now_time;
		double dist_y = dist_buffer_point;
		RCLCPP_DEBUG(logger_, "odom_msg.linear_x: %f", odom_msg.twist.twist.linear.x);
		RCLCPP_DEBUG(logger_, "dt: %f", dt);
		RCLCPP_DEBUG(logger_, "dist_buffer_point now: %f", dist_buffer_point);
		RCLCPP_DEBUG(logger_, "dist_y: %f", dist_y);
		if (std::abs(dist_y) < params_ptr->tolerance_r)
		{
			navigate_state_ = NavigateStates::ANGLE_TO_X_POSITIVE_ORIENTATION;
		}
		else
		{
			double translate_velocity = dist_y;
			if(drive_back)
			{
				translate_velocity *= -1;
			}
			if (std::abs(translate_velocity) > params_ptr->max_translation) {
				translate_velocity = std::copysign(params_ptr->max_translation, translate_velocity);
			}
			servo_vel->linear.x = translate_velocity;
			RCLCPP_DEBUG(logger_, "linear.x: : %f", translate_velocity);
		}
		break;
	}
	case NavigateStates::ANGLE_TO_X_POSITIVE_ORIENTATION:
	{
		RCLCPP_DEBUG(logger_, "------------- ANGLE_TO_X_POSITIVE_ORIENTATION -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- ANGLE_TO_X_POSITIVE_ORIENTATION -------------");
		servo_vel = geometry_msgs::msg::Twist();
		now_time = clock_->now().seconds();
		double dt = now_time - pre_time;
		if (sees_dock)
		{
			auto current_position_tmp = current_pose.getOrigin();
			auto current_angle_tmp = tf2::getYaw(current_pose.getRotation());
			RCLCPP_DEBUG(logger_, "robot =>  x: %f, y: %f, yaw: %f",
			             current_position_tmp.getX(), current_position_tmp.getY(),
			             current_angle_tmp);
		}
		else
		{
			RCLCPP_DEBUG(logger_, "robot =>  unknow position.");
		}

		RCLCPP_DEBUG(logger_, "robot_current_yaw_before: %f", robot_current_yaw);
		RCLCPP_DEBUG(logger_, "dt %f", dt);
		RCLCPP_DEBUG(logger_, "odom_msg.twist.twist.angular.z: %f", odom_msg.twist.twist.angular.z);
		robot_current_yaw += odom_msg.twist.twist.angular.z * dt;
		pre_time = now_time;
		RCLCPP_DEBUG(logger_, "robot_current_yaw_now: %f", robot_current_yaw);
		double dist_yaw = angles::shortest_angular_distance(robot_current_yaw, 0);
		RCLCPP_DEBUG(logger_, "dist_yaw: %f", dist_yaw);
		// fix bug when get odom/twist/twist/angluar/z wrong value
		double robot_yaw_marker = tf2::getYaw(current_pose.getRotation());
		double dist_yaw2 = angles::shortest_angular_distance(robot_yaw_marker, 0);

		RCLCPP_DEBUG(logger_, "dist_yaw2: %f", dist_yaw2);
		if(sees_dock && std::abs(dist_yaw2) < params_ptr->tolerance_angle )
		{
			auto current_position = current_pose.getOrigin();
			auto current_robot_x = current_position.getX();
			auto current_robot_y = current_position.getY();
			auto dist_buffer_point = std::hypot(current_robot_x - buffer_goal_point_x, current_robot_y - buffer_goal_point_y);
			if (dist_buffer_point < params_ptr->dist_goal_converged)
			{
				navigate_state_ = NavigateStates::ANGLE_TO_GOAL;
			}
			else
			{
				RCLCPP_DEBUG(logger_, "re-execute ANGLE_TO_BUFFER_POINT");
				navigate_state_ = NavigateStates::LOOKUP_ARUCO_MARKER;
			}
		}
		else
		{
			bound_rotation(dist_yaw2, params_ptr->min_rotation, params_ptr->max_rotation);
			servo_vel->angular.z = dist_yaw2;
			RCLCPP_DEBUG(logger_, "servo_vel->angular.z: %f", servo_vel->angular.z);
		}
		break;
	}
	case NavigateStates::ANGLE_TO_GOAL:
	{
		RCLCPP_DEBUG(logger_, "------------- ANGLE_TO_GOAL -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- ANGLE_TO_GOAL -------------");
		const GoalPoint & gp = goal_points_.front();

		RCLCPP_DEBUG(logger_, "goal =>  x: %f, y: %f, yaw: %f",
		             gp.x, gp.y, gp.theta);
		RCLCPP_DEBUG(logger_, "robot =>  x: %f, y: %f, yaw: %f",
		             current_position.getX(), current_position.getY(),
		             current_angle);


		double delta_y, delta_x;
		delta_y = std::abs(gp.y - current_position.getY());
		delta_x = std::abs(gp.x - current_position.getX());
		double dist_to_goal = std::hypot(delta_x, delta_y);
		if (dist_to_goal <= gp.radius || delta_y < params_ptr->dist_error_y_1) {
			servo_vel = geometry_msgs::msg::Twist();
			navigate_state_ = NavigateStates::GO_TO_GOAL_POSITION;
		}
		else
		{
			double ang = diff_angle(gp, current_position, current_angle, logger_);
			double ang_save = ang;
			RCLCPP_DEBUG(logger_, "diff angle: %f", ang);
			bound_rotation(ang, params_ptr->min_rotation, params_ptr->max_rotation);
			RCLCPP_DEBUG(logger_, "bound angle: %f", ang);
			RCLCPP_DEBUG(logger_, "--------------------------------");
			servo_vel = geometry_msgs::msg::Twist();
			// fix bug when robot had angle to marker but y coord error or odom data error,  10 degree(0.174533)
			if (std::abs(ang_save) < params_ptr->angle_to_goal_angle_converged || (sees_dock && std::abs(std::abs(current_angle) - M_PI) <  0.174533)) {
				navigate_state_ = NavigateStates::GO_TO_GOAL_POSITION;
				RCLCPP_DEBUG(logger_, " ******** change to state GO_TO_GOAL_POSITION ******** ");
			} else {
				servo_vel->angular.z = ang;
			}
		}
		break;
	}
	case NavigateStates::GO_TO_GOAL_POSITION:
	{
		RCLCPP_DEBUG(logger_, "------------- GO_TO_GOAL_POSITION -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- GO_TO_GOAL_POSITION -------------");
		const GoalPoint & gp = goal_points_.front();
		RCLCPP_DEBUG(logger_, "goal =>  x: %f, y: %f, yaw: %f",
		             gp.x, gp.y, gp.theta);
		RCLCPP_DEBUG(logger_, "robot =>  x: %f, y: %f, yaw: %f",
		             current_pose.getOrigin().getX(), current_pose.getOrigin().getY(),
		             current_angle);
		double delta_y, delta_x;
		delta_y = std::abs(gp.y - current_position.getY());
		delta_x = std::abs(gp.x - current_position.getX());
		double dist_to_goal = std::hypot(delta_x, delta_y);
		double ang = diff_angle(gp, current_position, current_angle, logger_);

		RCLCPP_DEBUG(logger_, "diff angle: %f", ang);
		double abs_ang = std::abs(ang);
		servo_vel = geometry_msgs::msg::Twist();
		// If robot is close enough to goal, move to final stage
		if (dist_to_goal < goal_points_.front().radius || std::abs(current_position.getX()) < std::abs(gp.x)) {
			navigate_state_ = NavigateStates::GOAL_ANGLE;
			RCLCPP_DEBUG(logger_, " ******** change to state GOAL_ANGLE ******** ");
			servo_vel->linear.x = gp.drive_backwards ? -params_ptr->max_translation : params_ptr->max_translation;
			// If robot angle has deviated too much from path, reset
		}
		// else if (abs_ang > params_ptr->go_to_goal_angle_too_far && delta_y > params_ptr->dist_error_y_1 && (delta_x + delta_y) > params_ptr->dist_error_x_and_y) {
		// navigate_state_ = NavigateStates::ANGLE_TO_GOAL;
		// RCLCPP_DEBUG(logger_, " ******** change to state ANGLE_TO_GOAL ******** ");
		// If neither of above conditions met, drive towards goal
		// }
		else {
			double translate_velocity = dist_to_goal;
			if (translate_velocity > params_ptr->max_translation) {
				translate_velocity = params_ptr->max_translation;
			}
			translate_velocity = params_ptr->max_translation;
			auto robot_abs_x = std::abs(current_position.getX());
			auto dist_low_speed = params_ptr->last_docked_distance_offset_ + params_ptr->distance_low_speed;
			auto dist_speed_down_length = (params_ptr->max_translation - params_ptr->translate_low_speed) * 5.0;
			auto dist_speed_down_range = params_ptr->max_translation - params_ptr->translate_low_speed;
			auto dist_speed_down = dist_low_speed + dist_speed_down_length;
			if (robot_abs_x < dist_speed_down)
			{
				translate_velocity = params_ptr->max_translation -
				                     (dist_speed_down - robot_abs_x) / dist_speed_down_length * dist_speed_down_range;
			}
			if (robot_abs_x < dist_low_speed)
			{
				translate_velocity = params_ptr->translate_low_speed;
			}
			if (gp.drive_backwards) {
				translate_velocity *= -1;
			}
			servo_vel->linear.x = translate_velocity;
			RCLCPP_DEBUG(logger_, "linear_x: %f", translate_velocity);
			// double angle_dist = angles::shortest_angular_distance(current_angle, 0);
			if(std::abs(current_position.getX()) < (params_ptr->last_docked_distance_offset_ + params_ptr->distance_low_speed))
			{
				RCLCPP_DEBUG(logger_, "low speed mode ");
				if (abs_ang > params_ptr->go_to_goal_apply_rotation_angle)
				{
					bound_rotation(ang, 0.01, params_ptr->rotation_low_speed);
					ang = generate_smooth_rotation_speed(last_rotation_speed_, last_rotation_speed_time_, ang, clock_);
					servo_vel->angular.z = ang;
					RCLCPP_DEBUG(logger_, "low speed mode => angular.z: %f", ang);
				}
			}
			else
			{
				RCLCPP_DEBUG(logger_, "normal speed mode ");
				if (abs_ang > params_ptr->go_to_goal_apply_rotation_angle) {
					bound_rotation(ang, params_ptr->go_to_goal_rotation_min, params_ptr->go_to_goal_rotation_max);
					ang = generate_smooth_rotation_speed(last_rotation_speed_, last_rotation_speed_time_, ang, clock_);
					servo_vel->angular.z = ang;
					RCLCPP_DEBUG(logger_, "normal speed mode => angular.z: %f", ang);
				}
			}

		}
		break;
	}
	case NavigateStates::GOAL_ANGLE:
	{
		RCLCPP_DEBUG(logger_, "***********************************");
		RCLCPP_DEBUG(logger_, "***********************************");
		RCLCPP_DEBUG(logger_, "------------- GOAL_ANGLE -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- GOAL_ANGLE -------------");
		const GoalPoint & gp = goal_points_.front();
		RCLCPP_DEBUG(logger_, "goal =>  x: %f, y: %f, yaw: %f",
		             gp.x, gp.y, gp.theta);
		RCLCPP_DEBUG(logger_, "robot =>  x: %f, y: %f, yaw: %f",
		             current_pose.getOrigin().getX(), current_pose.getOrigin().getY(),
		             current_angle);
		double ang = angles::shortest_angular_distance(current_angle, gp.theta);
		bound_rotation(ang, params_ptr->min_rotation, params_ptr->max_rotation);
		RCLCPP_DEBUG(logger_, "diff angle: %f", ang);
		servo_vel = geometry_msgs::msg::Twist();
		double translate_x = params_ptr->max_translation;
		if (gp.drive_backwards)
		{
			translate_x *= -1.0;
		}
		servo_vel->linear.x = translate_x;

		if (std::abs(ang) > params_ptr->goal_angle_converged) {
			servo_vel->angular.z = ang;
		} else {
		}
		goal_points_.pop_front();
		RCLCPP_DEBUG(logger_, "============ pop goal============");
		if (goal_points_.size() > 0) {
			navigate_state_ = NavigateStates::GO_TO_GOAL_POSITION;
			RCLCPP_DEBUG(logger_, "******** change to state GO_TO_GOAL_POSITION ******** ");
		}
		RCLCPP_DEBUG(logger_, " linear_x: %f", servo_vel->linear.x);
		RCLCPP_DEBUG(logger_, "angular.z: %f", servo_vel->angular.z);
		break;
	}
	case NavigateStates::UNDOCK:
	{
		RCLCPP_DEBUG(logger_, "------------- UNDOCK -------------");
		RCLCPP_INFO_THROTTLE(logger_, *clock_, 1000, "------------- UNDOCK -------------");
		
		servo_vel = geometry_msgs::msg::Twist();
		if(start_undock)
		{
			undock_start_time = clock_->now().seconds();
			start_undock = false;
			RCLCPP_DEBUG(logger_, "undock_start_time: %f", undock_start_time);
			undock_time = params_ptr->undock_time;
			undock_speed = params_ptr->undock_speed;
			RCLCPP_DEBUG(logger_, "undock_speed: %f", undock_speed);
			RCLCPP_DEBUG(logger_, "undock_time: %f", undock_time);
		}
		double now_time = clock_->now().seconds();
		double delta_time = now_time - undock_start_time;
		RCLCPP_DEBUG(logger_, "delta_time: %f", delta_time);
		if (delta_time < undock_time)
		{
			servo_vel->linear.x = undock_speed;
		}
		else
		{
			goal_points_.clear();
			RCLCPP_INFO(logger_, "undock end.");
			undocking = false;
		}
		break;
	}
	} // end of switch
	time_end = std::chrono::high_resolution_clock::now();
	time_cost = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_start).count();
	RCLCPP_DEBUG(logger_, "cost %d ms.", time_cost);
	return servo_vel;
}
motion_control_params *params_ptr;

private:
enum class NavigateStates
{
	LOOKUP_ARUCO_MARKER,
	ANGLE_TO_BUFFER_POINT,
	MOVE_TO_BUFFER_POINT,
	ANGLE_TO_X_POSITIVE_ORIENTATION,
	ANGLE_TO_GOAL,
	GO_TO_GOAL_POSITION,
	GOAL_ANGLE,
	UNDOCK
};

struct GoalPoint
{
	double x;
	double y;
	double theta;
	float radius;
	bool drive_backwards;
};

void bound_rotation(double & rotation_velocity, float min, float max)
{
	double abs_rot = std::abs(rotation_velocity);
	if (abs_rot > max) {
		rotation_velocity = std::copysign(max, rotation_velocity);
	} else if (abs_rot < min && abs_rot > 0.01) {
		// min speed if desire small non zero velocity
		rotation_velocity = std::copysign(min, rotation_velocity);
	}
}


// smooth rotation speed
float generate_smooth_rotation_speed(float & last_rotation, double & last_rotation_time, float cur_rotation, rclcpp::Clock::SharedPtr clock_)
{
	float acc = params_ptr->speed_rotation_acceleration;
	float new_rotation_speed, rotation_max_change_abs, rotation_cur_change_abs;
	if (first_pub_rotation_speed)
	{
		first_pub_rotation_speed = false;
		new_rotation_speed = std::copysign(params_ptr->speed_rotation_init_abs, cur_rotation);
	}
	else
	{
		double cur_time = clock_->now().seconds();
		rotation_max_change_abs = std::abs((cur_time - last_rotation_speed_time_) * acc);
		rotation_cur_change_abs = std::abs(cur_rotation - last_rotation);
		if (rotation_cur_change_abs > rotation_max_change_abs)
		{
			new_rotation_speed = last_rotation + std::copysign(rotation_max_change_abs, cur_rotation - last_rotation);
		}
		else
		{
			new_rotation_speed = cur_rotation;
		}
	}

	last_rotation = new_rotation_speed;
	last_rotation_time = clock_->now().seconds();

	return new_rotation_speed;
}

double diff_angle(const GoalPoint & goal_pt, const tf2::Vector3 & cur_position, double cur_angle, rclcpp::Logger logger_)
{

	double y = goal_pt.y - cur_position.getY();
	double x = goal_pt.x - cur_position.getX();
	double atan2_value = std::atan2(y, x);

	double result = angles::shortest_angular_distance(cur_angle, atan2_value);

	// RCLCPP_DEBUG(logger_, "------caculate diff-------");
	// RCLCPP_DEBUG(logger_, "gp.x: %f, gp.y: %f, cur.x: %f, cur.y: %f",
	//              goal_pt.x, goal_pt.y, cur_position.getX(), cur_position.getY());
	// RCLCPP_DEBUG(logger_, "y       => %f", y);
	// RCLCPP_DEBUG(logger_, "x       => %f", x);
	// RCLCPP_DEBUG(logger_, "atan2   => %f", atan2_value);
	// RCLCPP_DEBUG(logger_, "cur_ang => %f", cur_angle);
	// RCLCPP_DEBUG(logger_, "dist    => %f", result);

	return result;
}

bool hazards_valid(const tf2::Transform & current_pose, capella_ros_dock_msgs::msg::HazardDetectionVector hazards)
{
	bool ret = false;
	auto distance = std::abs(current_pose.getOrigin().getX());
	auto detections = hazards.detections;
	for (int i = 0; i < detections.size(); i++)
	{
		auto hazard = detections[i];
		using HazardDetection = capella_ros_dock_msgs::msg::HazardDetection;
		switch(hazard.type)
		{
		case HazardDetection::BACKUP_LIMIT:
		case HazardDetection::BUMP:
		case HazardDetection::CLIFF:
		case HazardDetection::STALL:
		case HazardDetection::WHEEL_DROP:
		case HazardDetection::OBJECT_PROXIMITY:
		{
			ret = true;
			break;
		}
		}
	}
	ret = ret && distance > params_ptr->dock_valid_obstacle_x;
	return ret;
}

std::mutex mutex_;
std::deque<GoalPoint> goal_points_;
NavigateStates navigate_state_;

std::chrono::high_resolution_clock::time_point time_start;
std::chrono::high_resolution_clock::time_point time_end;
int64_t time_cost;

double dist_buffer_point;
double dist_buffer_point_yaw;
double pre_time;
double now_time;
double first_sees_dock_time;
bool first_sees_dock = true;
double thre_angle_diff = 0.30; // 0.4461565280195475968735605160853 <= tan(32-arctan2(0.12/(0.32+0.1+0.5))

// buffer_goal_point
double buffer_goal_point_x; // docked,low_vel_dist,first_goal_dist, buffer_goal_dist
double buffer_goal_point_y = 0.0;
double robot_angle_to_buffer_point_yaw;
double robot_current_yaw;
double robot_current_yaw_positive;
bool drive_back = false;
double theta_positive, theta_negative;

rclcpp::Time last_time_hazards;
rclcpp::Time now_time_hazards;
float time_sleep;
float last_rotation_speed_ = 0.0f;
double last_rotation_speed_time_ = 0.0f;
bool first_pub_rotation_speed = true;

// when has contacted, keep moving a little time
bool first_contacted = true;
double first_contacted_time;

// impl for undock
bool  start_undock = true;
bool undocking = false;
double undock_start_time;
double undock_time;
double undock_speed;

};

}  // namespace capella_ros_dock
#endif   // CAPELLA_ROS_DOCK__SIMPLE_GOAL_CONTROLLER_HPP_
