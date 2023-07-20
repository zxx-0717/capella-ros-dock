// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_dock_msgs:msg/HazardDetectionVector.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__BUILDER_HPP_
#define CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_dock_msgs/msg/detail/hazard_detection_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_dock_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardDetectionVector_detections
{
public:
  explicit Init_HazardDetectionVector_detections(::capella_ros_dock_msgs::msg::HazardDetectionVector & msg)
  : msg_(msg)
  {}
  ::capella_ros_dock_msgs::msg::HazardDetectionVector detections(::capella_ros_dock_msgs::msg::HazardDetectionVector::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_dock_msgs::msg::HazardDetectionVector msg_;
};

class Init_HazardDetectionVector_header
{
public:
  Init_HazardDetectionVector_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardDetectionVector_detections header(::capella_ros_dock_msgs::msg::HazardDetectionVector::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HazardDetectionVector_detections(msg_);
  }

private:
  ::capella_ros_dock_msgs::msg::HazardDetectionVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_dock_msgs::msg::HazardDetectionVector>()
{
  return capella_ros_dock_msgs::msg::builder::Init_HazardDetectionVector_header();
}

}  // namespace capella_ros_dock_msgs

#endif  // CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__BUILDER_HPP_
