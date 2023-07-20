// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/SingleDetector.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/single_detector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_SingleDetector_z
{
public:
  explicit Init_SingleDetector_z(::capella_ros_msg::msg::SingleDetector & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::SingleDetector z(::capella_ros_msg::msg::SingleDetector::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::SingleDetector msg_;
};

class Init_SingleDetector_y
{
public:
  explicit Init_SingleDetector_y(::capella_ros_msg::msg::SingleDetector & msg)
  : msg_(msg)
  {}
  Init_SingleDetector_z y(::capella_ros_msg::msg::SingleDetector::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SingleDetector_z(msg_);
  }

private:
  ::capella_ros_msg::msg::SingleDetector msg_;
};

class Init_SingleDetector_x
{
public:
  explicit Init_SingleDetector_x(::capella_ros_msg::msg::SingleDetector & msg)
  : msg_(msg)
  {}
  Init_SingleDetector_y x(::capella_ros_msg::msg::SingleDetector::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SingleDetector_y(msg_);
  }

private:
  ::capella_ros_msg::msg::SingleDetector msg_;
};

class Init_SingleDetector_part
{
public:
  Init_SingleDetector_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleDetector_x part(::capella_ros_msg::msg::SingleDetector::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_SingleDetector_x(msg_);
  }

private:
  ::capella_ros_msg::msg::SingleDetector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::SingleDetector>()
{
  return capella_ros_msg::msg::builder::Init_SingleDetector_part();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__BUILDER_HPP_
