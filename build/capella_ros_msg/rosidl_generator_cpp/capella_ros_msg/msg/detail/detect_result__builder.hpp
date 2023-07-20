// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/DetectResult.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/detect_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_DetectResult_result
{
public:
  Init_DetectResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_msg::msg::DetectResult result(::capella_ros_msg::msg::DetectResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::DetectResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::DetectResult>()
{
  return capella_ros_msg::msg::builder::Init_DetectResult_result();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__BUILDER_HPP_
