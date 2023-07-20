// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:srv/CartographerMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/srv/detail/cartographer_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::CartographerMode_Request>()
{
  return ::capella_ros_service_interfaces::srv::CartographerMode_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace capella_ros_service_interfaces


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_CartographerMode_Response_cart_status
{
public:
  Init_CartographerMode_Response_cart_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::srv::CartographerMode_Response cart_status(::capella_ros_service_interfaces::srv::CartographerMode_Response::_cart_status_type arg)
  {
    msg_.cart_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::CartographerMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::CartographerMode_Response>()
{
  return capella_ros_service_interfaces::srv::builder::Init_CartographerMode_Response_cart_status();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__BUILDER_HPP_
