#ifndef CAPELLA_ROS_DOCK__UTILS_HPP_
#define CAPELLA_ROS_DOCK__UTILS_HPP_

#include <string>

namespace capella_ros_dock{

struct motion_control_params
{
	int max_dock_action_run_time;
	float min_rotation;
	float max_rotation;
	float min_translation;
	float max_translation;
	float angle_to_goal_angle_converged;
	float go_to_goal_angle_too_far;
	float go_to_goal_apply_rotation_angle;
	float goal_angle_converged;
	float dist_goal_converged;
	float last_docked_distance_offset_;
	float distance_low_speed;
	float translate_low_speed;
	float rotation_low_speed;
	float first_goal_distance;
	float second_goal_distance;
	float buffer_goal_distance;
	float camera_horizontal_view;
	float localization_converged_time;
	std::string motion_control_log_level;
};
} // end namespace capella_ros_dock

#endif
