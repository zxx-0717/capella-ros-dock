// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:srv/SwitchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/srv/detail/switch_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_SwitchMode_Request_mode
{
public:
  Init_SwitchMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::srv::SwitchMode_Request mode(::capella_ros_service_interfaces::srv::SwitchMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::SwitchMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::SwitchMode_Request>()
{
  return capella_ros_service_interfaces::srv::builder::Init_SwitchMode_Request_mode();
}

}  // namespace capella_ros_service_interfaces


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_SwitchMode_Response_status
{
public:
  Init_SwitchMode_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::srv::SwitchMode_Response status(::capella_ros_service_interfaces::srv::SwitchMode_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::SwitchMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::SwitchMode_Response>()
{
  return capella_ros_service_interfaces::srv::builder::Init_SwitchMode_Response_status();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__BUILDER_HPP_
