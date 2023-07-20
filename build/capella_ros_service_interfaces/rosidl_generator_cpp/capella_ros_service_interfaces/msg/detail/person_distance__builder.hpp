// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/PersonDistance.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__PERSON_DISTANCE__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__PERSON_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/person_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_PersonDistance_distance
{
public:
  Init_PersonDistance_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::msg::PersonDistance distance(::capella_ros_service_interfaces::msg::PersonDistance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::PersonDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::PersonDistance>()
{
  return capella_ros_service_interfaces::msg::builder::Init_PersonDistance_distance();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__PERSON_DISTANCE__BUILDER_HPP_
