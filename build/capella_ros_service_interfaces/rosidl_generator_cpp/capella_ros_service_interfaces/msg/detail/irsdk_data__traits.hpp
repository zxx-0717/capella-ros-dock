// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_service_interfaces:msg/IrsdkData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__TRAITS_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_service_interfaces/msg/detail/irsdk_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace capella_ros_service_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrsdkData & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: temperature
  {
    if (msg.temperature.size() == 0) {
      out << "temperature: []";
    } else {
      out << "temperature: [";
      size_t pending_items = msg.temperature.size();
      for (auto item : msg.temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const IrsdkData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature.size() == 0) {
      out << "temperature: []\n";
    } else {
      out << "temperature:\n";
      for (auto item : msg.temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrsdkData & msg, bool use_flow_style = false)
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
  const capella_ros_service_interfaces::msg::IrsdkData & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::msg::IrsdkData & msg)
{
  return capella_ros_service_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::msg::IrsdkData>()
{
  return "capella_ros_service_interfaces::msg::IrsdkData";
}

template<>
inline const char * name<capella_ros_service_interfaces::msg::IrsdkData>()
{
  return "capella_ros_service_interfaces/msg/IrsdkData";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::msg::IrsdkData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::msg::IrsdkData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capella_ros_service_interfaces::msg::IrsdkData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__TRAITS_HPP_
