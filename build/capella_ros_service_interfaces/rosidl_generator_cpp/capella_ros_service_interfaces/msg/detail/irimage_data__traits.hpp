// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__TRAITS_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_service_interfaces/msg/detail/irimage_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'irtemp_and_coord'
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__traits.hpp"

namespace capella_ros_service_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrimageData & msg,
  std::ostream & out)
{
  out << "{";
  // member: irimage
  {
    if (msg.irimage.size() == 0) {
      out << "irimage: []";
    } else {
      out << "irimage: [";
      size_t pending_items = msg.irimage.size();
      for (auto item : msg.irimage) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: irtemp_and_coord
  {
    if (msg.irtemp_and_coord.size() == 0) {
      out << "irtemp_and_coord: []";
    } else {
      out << "irtemp_and_coord: [";
      size_t pending_items = msg.irtemp_and_coord.size();
      for (auto item : msg.irtemp_and_coord) {
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
  const IrimageData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: irimage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.irimage.size() == 0) {
      out << "irimage: []\n";
    } else {
      out << "irimage:\n";
      for (auto item : msg.irimage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: irtemp_and_coord
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.irtemp_and_coord.size() == 0) {
      out << "irtemp_and_coord: []\n";
    } else {
      out << "irtemp_and_coord:\n";
      for (auto item : msg.irtemp_and_coord) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrimageData & msg, bool use_flow_style = false)
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
  const capella_ros_service_interfaces::msg::IrimageData & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::msg::IrimageData & msg)
{
  return capella_ros_service_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::msg::IrimageData>()
{
  return "capella_ros_service_interfaces::msg::IrimageData";
}

template<>
inline const char * name<capella_ros_service_interfaces::msg::IrimageData>()
{
  return "capella_ros_service_interfaces/msg/IrimageData";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::msg::IrimageData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::msg::IrimageData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capella_ros_service_interfaces::msg::IrimageData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__TRAITS_HPP_
