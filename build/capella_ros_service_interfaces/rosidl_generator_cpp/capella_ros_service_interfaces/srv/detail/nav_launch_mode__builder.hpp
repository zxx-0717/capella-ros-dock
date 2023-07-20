// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:srv/NavLaunchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_NavLaunchMode_Request_free_thresh
{
public:
  explicit Init_NavLaunchMode_Request_free_thresh(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request free_thresh(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_free_thresh_type arg)
  {
    msg_.free_thresh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_occupied_thresh
{
public:
  explicit Init_NavLaunchMode_Request_occupied_thresh(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  Init_NavLaunchMode_Request_free_thresh occupied_thresh(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_occupied_thresh_type arg)
  {
    msg_.occupied_thresh = std::move(arg);
    return Init_NavLaunchMode_Request_free_thresh(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_negate
{
public:
  explicit Init_NavLaunchMode_Request_negate(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  Init_NavLaunchMode_Request_occupied_thresh negate(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_negate_type arg)
  {
    msg_.negate = std::move(arg);
    return Init_NavLaunchMode_Request_occupied_thresh(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_z
{
public:
  explicit Init_NavLaunchMode_Request_z(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  Init_NavLaunchMode_Request_negate z(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_NavLaunchMode_Request_negate(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_y
{
public:
  explicit Init_NavLaunchMode_Request_y(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  Init_NavLaunchMode_Request_z y(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_NavLaunchMode_Request_z(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_x
{
public:
  explicit Init_NavLaunchMode_Request_x(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  Init_NavLaunchMode_Request_y x(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NavLaunchMode_Request_y(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_resolution
{
public:
  explicit Init_NavLaunchMode_Request_resolution(::capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
  : msg_(msg)
  {}
  Init_NavLaunchMode_Request_x resolution(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_NavLaunchMode_Request_x(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

class Init_NavLaunchMode_Request_image
{
public:
  Init_NavLaunchMode_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavLaunchMode_Request_resolution image(::capella_ros_service_interfaces::srv::NavLaunchMode_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_NavLaunchMode_Request_resolution(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::NavLaunchMode_Request>()
{
  return capella_ros_service_interfaces::srv::builder::Init_NavLaunchMode_Request_image();
}

}  // namespace capella_ros_service_interfaces


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_NavLaunchMode_Response_nav_status
{
public:
  Init_NavLaunchMode_Response_nav_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Response nav_status(::capella_ros_service_interfaces::srv::NavLaunchMode_Response::_nav_status_type arg)
  {
    msg_.nav_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::NavLaunchMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::NavLaunchMode_Response>()
{
  return capella_ros_service_interfaces::srv::builder::Init_NavLaunchMode_Response_nav_status();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__BUILDER_HPP_
