// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_Battery_res_cap
{
public:
  explicit Init_Battery_res_cap(::capella_ros_msg::msg::Battery & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::Battery res_cap(::capella_ros_msg::msg::Battery::_res_cap_type arg)
  {
    msg_.res_cap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::Battery msg_;
};

class Init_Battery_battery
{
public:
  Init_Battery_battery()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_res_cap battery(::capella_ros_msg::msg::Battery::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_Battery_res_cap(msg_);
  }

private:
  ::capella_ros_msg::msg::Battery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::Battery>()
{
  return capella_ros_msg::msg::builder::Init_Battery_battery();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__BUILDER_HPP_
