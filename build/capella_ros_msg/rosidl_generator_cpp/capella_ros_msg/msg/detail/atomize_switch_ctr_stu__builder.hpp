// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_AtomizeSwitchCtrStu_strength
{
public:
  explicit Init_AtomizeSwitchCtrStu_strength(::capella_ros_msg::msg::AtomizeSwitchCtrStu & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::AtomizeSwitchCtrStu strength(::capella_ros_msg::msg::AtomizeSwitchCtrStu::_strength_type arg)
  {
    msg_.strength = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::AtomizeSwitchCtrStu msg_;
};

class Init_AtomizeSwitchCtrStu_atomize_sw
{
public:
  explicit Init_AtomizeSwitchCtrStu_atomize_sw(::capella_ros_msg::msg::AtomizeSwitchCtrStu & msg)
  : msg_(msg)
  {}
  Init_AtomizeSwitchCtrStu_strength atomize_sw(::capella_ros_msg::msg::AtomizeSwitchCtrStu::_atomize_sw_type arg)
  {
    msg_.atomize_sw = std::move(arg);
    return Init_AtomizeSwitchCtrStu_strength(msg_);
  }

private:
  ::capella_ros_msg::msg::AtomizeSwitchCtrStu msg_;
};

class Init_AtomizeSwitchCtrStu_emer_button
{
public:
  Init_AtomizeSwitchCtrStu_emer_button()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AtomizeSwitchCtrStu_atomize_sw emer_button(::capella_ros_msg::msg::AtomizeSwitchCtrStu::_emer_button_type arg)
  {
    msg_.emer_button = std::move(arg);
    return Init_AtomizeSwitchCtrStu_atomize_sw(msg_);
  }

private:
  ::capella_ros_msg::msg::AtomizeSwitchCtrStu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::AtomizeSwitchCtrStu>()
{
  return capella_ros_msg::msg::builder::Init_AtomizeSwitchCtrStu_emer_button();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__BUILDER_HPP_
