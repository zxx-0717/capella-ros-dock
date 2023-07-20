// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_msg:msg/DetectResult.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__TRAITS_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_msg/msg/detail/detect_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'result'
#include "capella_ros_msg/msg/detail/single_detector__traits.hpp"

namespace capella_ros_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    if (msg.result.size() == 0) {
      out << "result: []";
    } else {
      out << "result: [";
      size_t pending_items = msg.result.size();
      for (auto item : msg.result) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result.size() == 0) {
      out << "result: []\n";
    } else {
      out << "result:\n";
      for (auto item : msg.result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectResult & msg, bool use_flow_style = false)
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
  const capella_ros_msg::msg::DetectResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_msg::msg::DetectResult & msg)
{
  return capella_ros_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_msg::msg::DetectResult>()
{
  return "capella_ros_msg::msg::DetectResult";
}

template<>
inline const char * name<capella_ros_msg::msg::DetectResult>()
{
  return "capella_ros_msg/msg/DetectResult";
}

template<>
struct has_fixed_size<capella_ros_msg::msg::DetectResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capella_ros_msg::msg::DetectResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capella_ros_msg::msg::DetectResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__TRAITS_HPP_
