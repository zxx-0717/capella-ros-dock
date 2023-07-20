// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_dock_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION__TRAITS_HPP_
#define CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_dock_msgs/msg/detail/hazard_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace capella_ros_dock_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HazardDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HazardDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HazardDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace capella_ros_dock_msgs

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_dock_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_dock_msgs::msg::HazardDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_dock_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_dock_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_dock_msgs::msg::HazardDetection & msg)
{
  return capella_ros_dock_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_dock_msgs::msg::HazardDetection>()
{
  return "capella_ros_dock_msgs::msg::HazardDetection";
}

template<>
inline const char * name<capella_ros_dock_msgs::msg::HazardDetection>()
{
  return "capella_ros_dock_msgs/msg/HazardDetection";
}

template<>
struct has_fixed_size<capella_ros_dock_msgs::msg::HazardDetection>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<capella_ros_dock_msgs::msg::HazardDetection>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<capella_ros_dock_msgs::msg::HazardDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION__TRAITS_HPP_
