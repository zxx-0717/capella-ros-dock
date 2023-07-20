

#ifndef CAPELLA_ROS_DOCK__WALL_FOLLOW_BEHAVIOR_HPP_
#define CAPELLA_ROS_DOCK__WALL_FOLLOW_BEHAVIOR_HPP_

#include <stdint.h>

#include <atomic>
#include <memory>
#include <string>
#include <vector>

#include "capella_ros_dock_msgs/action/wall_follow.hpp"
#include "capella_ros_dock_msgs/msg/hazard_detection_vector.hpp"
#include "capella_ros_dock_msgs/msg/ir_intensity_vector.hpp"
#include "capella_ros_dock/behaviors_scheduler.hpp"
#include "capella_ros_dock/wall_follow_states.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

namespace capella_ros_dock
{

/**
 * @brief This class allows to create and manage the WallFollow action
 * server.  Uses a simplistic wall follow implementation that is not intended
 * to exactly mimic the behavior of the robot.  The robot will follow tighter
 * than this simple implementation.
 */
class WallFollowBehavior
{
public:
  WallFollowBehavior(
    rclcpp::node_interfaces::NodeBaseInterface::SharedPtr node_base_interface,
    rclcpp::node_interfaces::NodeClockInterface::SharedPtr node_clock_interface,
    rclcpp::node_interfaces::NodeLoggingInterface::SharedPtr node_logging_interface,
    rclcpp::node_interfaces::NodeTopicsInterface::SharedPtr node_topics_interface,
    rclcpp::node_interfaces::NodeWaitablesInterface::SharedPtr node_waitables_interface,
    std::shared_ptr<BehaviorsScheduler> behavior_scheduler);
  ~WallFollowBehavior() = default;

  void hazard_vector_callback(capella_ros_dock_msgs::msg::HazardDetectionVector::ConstSharedPtr msg);

private:
  bool wall_follow_behavior_is_done();

  void ir_intensity_callback(capella_ros_dock_msgs::msg::IrIntensityVector::ConstSharedPtr msg);

  /// Get velocity command to follow wall given robot position and sensor readings
  BehaviorsScheduler::optional_output_t get_next_servo_cmd(const RobotState & current_state);

  rclcpp_action::GoalResponse handle_wall_follow_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const capella_ros_dock_msgs::action::WallFollow::Goal> goal);

  rclcpp_action::CancelResponse handle_wall_follow_cancel(
    const std::shared_ptr<
      rclcpp_action::ServerGoalHandle<capella_ros_dock_msgs::action::WallFollow>> goal_handle);

  void handle_wall_follow_accepted(
    const std::shared_ptr<
      rclcpp_action::ServerGoalHandle<capella_ros_dock_msgs::action::WallFollow>> goal_handle);

  BehaviorsScheduler::optional_output_t execute_wall_follow(
    const std::shared_ptr<
      rclcpp_action::ServerGoalHandle<capella_ros_dock_msgs::action::WallFollow>> goal_handle,
    const RobotState & current_state);

  rclcpp_action::Server<capella_ros_dock_msgs::action::WallFollow>::SharedPtr
    wall_follow_action_server_;

  rclcpp::Subscription<capella_ros_dock_msgs::msg::IrIntensityVector>::SharedPtr ir_intensity_sub_;

  rclcpp::Logger logger_;
  rclcpp::Clock::SharedPtr clock_ {nullptr};
  std::shared_ptr<BehaviorsScheduler> behavior_scheduler_ {nullptr};
  std::atomic<bool> wf_running_ {false};
  std::atomic<bool> wf_engaged_ {false};
  std::atomic<int8_t> wf_side_ {0};
  rclcpp::Duration wf_end_duration_;
  rclcpp::Time wf_start_time_;
  std::mutex sensor_mutex_;
  capella_ros_dock_msgs::msg::IrIntensityVector last_ir_intensity_;
  std::shared_ptr<WallFollowStateManager> wf_state_mgr_ {nullptr};
  rclcpp::Time last_feedback_time_;
  const rclcpp::Duration report_feedback_interval_ {std::chrono::seconds(3)};
};

}  // namespace capella_ros_dock
#endif  // CAPELLA_ROS_DOCK__WALL_FOLLOW_BEHAVIOR_HPP_
