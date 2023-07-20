// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/charge_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChargeState_is_docking
{
public:
  explicit Init_ChargeState_is_docking(::capella_ros_service_interfaces::msg::ChargeState & msg)
  : msg_(msg)
  {}
  ::capella_ros_service_interfaces::msg::ChargeState is_docking(::capella_ros_service_interfaces::msg::ChargeState::_is_docking_type arg)
  {
    msg_.is_docking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::ChargeState msg_;
};

class Init_ChargeState_is_charging
{
public:
  explicit Init_ChargeState_is_charging(::capella_ros_service_interfaces::msg::ChargeState & msg)
  : msg_(msg)
  {}
  Init_ChargeState_is_docking is_charging(::capella_ros_service_interfaces::msg::ChargeState::_is_charging_type arg)
  {
    msg_.is_charging = std::move(arg);
    return Init_ChargeState_is_docking(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::ChargeState msg_;
};

class Init_ChargeState_has_contact
{
public:
  explicit Init_ChargeState_has_contact(::capella_ros_service_interfaces::msg::ChargeState & msg)
  : msg_(msg)
  {}
  Init_ChargeState_is_charging has_contact(::capella_ros_service_interfaces::msg::ChargeState::_has_contact_type arg)
  {
    msg_.has_contact = std::move(arg);
    return Init_ChargeState_is_charging(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::ChargeState msg_;
};

class Init_ChargeState_pid
{
public:
  Init_ChargeState_pid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeState_has_contact pid(::capella_ros_service_interfaces::msg::ChargeState::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_ChargeState_has_contact(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::ChargeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::ChargeState>()
{
  return capella_ros_service_interfaces::msg::builder::Init_ChargeState_pid();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__BUILDER_HPP_
