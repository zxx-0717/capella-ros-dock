// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_msg:msg/ContactDriveStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__TRAITS_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_msg/msg/detail/contact_drive_stu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactDriveStu & msg,
  std::ostream & out)
{
  out << "{";
  // member: contact_stu
  {
    out << "contact_stu: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_stu, out);
    out << ", ";
  }

  // member: drive_stu
  {
    out << "drive_stu: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_stu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactDriveStu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: contact_stu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_stu: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_stu, out);
    out << "\n";
  }

  // member: drive_stu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_stu: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_stu, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactDriveStu & msg, bool use_flow_style = false)
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
  const capella_ros_msg::msg::ContactDriveStu & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_msg::msg::ContactDriveStu & msg)
{
  return capella_ros_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_msg::msg::ContactDriveStu>()
{
  return "capella_ros_msg::msg::ContactDriveStu";
}

template<>
inline const char * name<capella_ros_msg::msg::ContactDriveStu>()
{
  return "capella_ros_msg/msg/ContactDriveStu";
}

template<>
struct has_fixed_size<capella_ros_msg::msg::ContactDriveStu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_msg::msg::ContactDriveStu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_msg::msg::ContactDriveStu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__TRAITS_HPP_
