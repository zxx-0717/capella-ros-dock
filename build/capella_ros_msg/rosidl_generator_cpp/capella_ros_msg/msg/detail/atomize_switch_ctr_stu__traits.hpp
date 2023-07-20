// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__TRAITS_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AtomizeSwitchCtrStu & msg,
  std::ostream & out)
{
  out << "{";
  // member: emer_button
  {
    out << "emer_button: ";
    rosidl_generator_traits::value_to_yaml(msg.emer_button, out);
    out << ", ";
  }

  // member: atomize_sw
  {
    out << "atomize_sw: ";
    rosidl_generator_traits::value_to_yaml(msg.atomize_sw, out);
    out << ", ";
  }

  // member: strength
  {
    out << "strength: ";
    rosidl_generator_traits::value_to_yaml(msg.strength, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AtomizeSwitchCtrStu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: emer_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emer_button: ";
    rosidl_generator_traits::value_to_yaml(msg.emer_button, out);
    out << "\n";
  }

  // member: atomize_sw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atomize_sw: ";
    rosidl_generator_traits::value_to_yaml(msg.atomize_sw, out);
    out << "\n";
  }

  // member: strength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strength: ";
    rosidl_generator_traits::value_to_yaml(msg.strength, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AtomizeSwitchCtrStu & msg, bool use_flow_style = false)
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
  const capella_ros_msg::msg::AtomizeSwitchCtrStu & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_msg::msg::AtomizeSwitchCtrStu & msg)
{
  return capella_ros_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_msg::msg::AtomizeSwitchCtrStu>()
{
  return "capella_ros_msg::msg::AtomizeSwitchCtrStu";
}

template<>
inline const char * name<capella_ros_msg::msg::AtomizeSwitchCtrStu>()
{
  return "capella_ros_msg/msg/AtomizeSwitchCtrStu";
}

template<>
struct has_fixed_size<capella_ros_msg::msg::AtomizeSwitchCtrStu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_msg::msg::AtomizeSwitchCtrStu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_msg::msg::AtomizeSwitchCtrStu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__TRAITS_HPP_
