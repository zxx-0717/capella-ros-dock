// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_dock_msgs:srv/RobotPower.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__ROBOT_POWER__BUILDER_HPP_
#define CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__ROBOT_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_dock_msgs/srv/detail/robot_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_dock_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_dock_msgs::srv::RobotPower_Request>()
{
  return ::capella_ros_dock_msgs::srv::RobotPower_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace capella_ros_dock_msgs


namespace capella_ros_dock_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotPower_Response_message
{
public:
  explicit Init_RobotPower_Response_message(::capella_ros_dock_msgs::srv::RobotPower_Response & msg)
  : msg_(msg)
  {}
  ::capella_ros_dock_msgs::srv::RobotPower_Response message(::capella_ros_dock_msgs::srv::RobotPower_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_dock_msgs::srv::RobotPower_Response msg_;
};

class Init_RobotPower_Response_success
{
public:
  Init_RobotPower_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPower_Response_message success(::capella_ros_dock_msgs::srv::RobotPower_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotPower_Response_message(msg_);
  }

private:
  ::capella_ros_dock_msgs::srv::RobotPower_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_dock_msgs::srv::RobotPower_Response>()
{
  return capella_ros_dock_msgs::srv::builder::Init_RobotPower_Response_success();
}

}  // namespace capella_ros_dock_msgs

#endif  // CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__ROBOT_POWER__BUILDER_HPP_
