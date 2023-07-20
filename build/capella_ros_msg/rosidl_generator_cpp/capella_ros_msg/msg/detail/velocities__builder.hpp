// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/Velocities.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__VELOCITIES__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_Velocities_angular_z
{
public:
  explicit Init_Velocities_angular_z(::capella_ros_msg::msg::Velocities & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::Velocities angular_z(::capella_ros_msg::msg::Velocities::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::Velocities msg_;
};

class Init_Velocities_linear_y
{
public:
  explicit Init_Velocities_linear_y(::capella_ros_msg::msg::Velocities & msg)
  : msg_(msg)
  {}
  Init_Velocities_angular_z linear_y(::capella_ros_msg::msg::Velocities::_linear_y_type arg)
  {
    msg_.linear_y = std::move(arg);
    return Init_Velocities_angular_z(msg_);
  }

private:
  ::capella_ros_msg::msg::Velocities msg_;
};

class Init_Velocities_linear_x
{
public:
  Init_Velocities_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocities_linear_y linear_x(::capella_ros_msg::msg::Velocities::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Velocities_linear_y(msg_);
  }

private:
  ::capella_ros_msg::msg::Velocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::Velocities>()
{
  return capella_ros_msg::msg::builder::Init_Velocities_linear_x();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__VELOCITIES__BUILDER_HPP_
