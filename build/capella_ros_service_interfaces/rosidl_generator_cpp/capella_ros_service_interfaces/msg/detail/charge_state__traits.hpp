// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__TRAITS_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_service_interfaces/msg/detail/charge_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_service_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargeState & msg,
  std::ostream & out)
{
  out << "{";
  // member: pid
  {
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << ", ";
  }

  // member: has_contact
  {
    out << "has_contact: ";
    rosidl_generator_traits::value_to_yaml(msg.has_contact, out);
    out << ", ";
  }

  // member: is_charging
  {
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << ", ";
  }

  // member: is_docking
  {
    out << "is_docking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << "\n";
  }

  // member: has_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_contact: ";
    rosidl_generator_traits::value_to_yaml(msg.has_contact, out);
    out << "\n";
  }

  // member: is_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << "\n";
  }

  // member: is_docking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_docking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeState & msg, bool use_flow_style = false)
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

}  // namespace capella_ros_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_service_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_service_interfaces::msg::ChargeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::msg::ChargeState & msg)
{
  return capella_ros_service_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::msg::ChargeState>()
{
  return "capella_ros_service_interfaces::msg::ChargeState";
}

template<>
inline const char * name<capella_ros_service_interfaces::msg::ChargeState>()
{
  return "capella_ros_service_interfaces/msg/ChargeState";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::msg::ChargeState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::msg::ChargeState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capella_ros_service_interfaces::msg::ChargeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__TRAITS_HPP_
