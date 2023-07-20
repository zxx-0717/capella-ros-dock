// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/ChargeMarkerVisible.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/charge_marker_visible__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChargeMarkerVisible_marker_visible
{
public:
  Init_ChargeMarkerVisible_marker_visible()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::msg::ChargeMarkerVisible marker_visible(::capella_ros_service_interfaces::msg::ChargeMarkerVisible::_marker_visible_type arg)
  {
    msg_.marker_visible = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::ChargeMarkerVisible msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::ChargeMarkerVisible>()
{
  return capella_ros_service_interfaces::msg::builder::Init_ChargeMarkerVisible_marker_visible();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__BUILDER_HPP_
