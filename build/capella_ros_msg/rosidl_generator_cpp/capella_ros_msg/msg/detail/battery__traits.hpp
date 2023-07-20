// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_msg:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__TRAITS_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_msg/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Battery & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: res_cap
  {
    out << "res_cap: ";
    rosidl_generator_traits::value_to_yaml(msg.res_cap, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Battery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: res_cap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res_cap: ";
    rosidl_generator_traits::value_to_yaml(msg.res_cap, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Battery & msg, bool use_flow_style = false)
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

}  // namespace capella_ros_msg

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_msg::msg::Battery & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_msg::msg::Battery & msg)
{
  return capella_ros_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_msg::msg::Battery>()
{
  return "capella_ros_msg::msg::Battery";
}

template<>
inline const char * name<capella_ros_msg::msg::Battery>()
{
  return "capella_ros_msg/msg/Battery";
}

template<>
struct has_fixed_size<capella_ros_msg::msg::Battery>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_msg::msg::Battery>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_msg::msg::Battery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__TRAITS_HPP_
