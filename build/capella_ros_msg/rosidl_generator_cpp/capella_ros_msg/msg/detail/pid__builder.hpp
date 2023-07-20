// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__PID__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_PID_i
{
public:
  explicit Init_PID_i(::capella_ros_msg::msg::PID & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::PID i(::capella_ros_msg::msg::PID::_i_type arg)
  {
    msg_.i = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::PID msg_;
};

class Init_PID_d
{
public:
  explicit Init_PID_d(::capella_ros_msg::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_i d(::capella_ros_msg::msg::PID::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_PID_i(msg_);
  }

private:
  ::capella_ros_msg::msg::PID msg_;
};

class Init_PID_p
{
public:
  Init_PID_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_d p(::capella_ros_msg::msg::PID::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_PID_d(msg_);
  }

private:
  ::capella_ros_msg::msg::PID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::PID>()
{
  return capella_ros_msg::msg::builder::Init_PID_p();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__PID__BUILDER_HPP_
