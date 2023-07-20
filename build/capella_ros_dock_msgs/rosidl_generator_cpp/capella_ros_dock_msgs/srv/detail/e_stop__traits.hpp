// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_dock_msgs:srv/EStop.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__E_STOP__TRAITS_HPP_
#define CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__E_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_dock_msgs/srv/detail/e_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_dock_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EStop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: e_stop_on
  {
    out << "e_stop_on: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop_on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: e_stop_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_stop_on: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop_on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EStop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace capella_ros_dock_msgs

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_dock_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_dock_msgs::srv::EStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_dock_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_dock_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_dock_msgs::srv::EStop_Request & msg)
{
  return capella_ros_dock_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_dock_msgs::srv::EStop_Request>()
{
  return "capella_ros_dock_msgs::srv::EStop_Request";
}

template<>
inline const char * name<capella_ros_dock_msgs::srv::EStop_Request>()
{
  return "capella_ros_dock_msgs/srv/EStop_Request";
}

template<>
struct has_fixed_size<capella_ros_dock_msgs::srv::EStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_dock_msgs::srv::EStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_dock_msgs::srv::EStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace capella_ros_dock_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EStop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace capella_ros_dock_msgs

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_dock_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_dock_msgs::srv::EStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_dock_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_dock_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_dock_msgs::srv::EStop_Response & msg)
{
  return capella_ros_dock_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_dock_msgs::srv::EStop_Response>()
{
  return "capella_ros_dock_msgs::srv::EStop_Response";
}

template<>
inline const char * name<capella_ros_dock_msgs::srv::EStop_Response>()
{
  return "capella_ros_dock_msgs/srv/EStop_Response";
}

template<>
struct has_fixed_size<capella_ros_dock_msgs::srv::EStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capella_ros_dock_msgs::srv::EStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capella_ros_dock_msgs::srv::EStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<capella_ros_dock_msgs::srv::EStop>()
{
  return "capella_ros_dock_msgs::srv::EStop";
}

template<>
inline const char * name<capella_ros_dock_msgs::srv::EStop>()
{
  return "capella_ros_dock_msgs/srv/EStop";
}

template<>
struct has_fixed_size<capella_ros_dock_msgs::srv::EStop>
  : std::integral_constant<
    bool,
    has_fixed_size<capella_ros_dock_msgs::srv::EStop_Request>::value &&
    has_fixed_size<capella_ros_dock_msgs::srv::EStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<capella_ros_dock_msgs::srv::EStop>
  : std::integral_constant<
    bool,
    has_bounded_size<capella_ros_dock_msgs::srv::EStop_Request>::value &&
    has_bounded_size<capella_ros_dock_msgs::srv::EStop_Response>::value
  >
{
};

template<>
struct is_service<capella_ros_dock_msgs::srv::EStop>
  : std::true_type
{
};

template<>
struct is_service_request<capella_ros_dock_msgs::srv::EStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<capella_ros_dock_msgs::srv::EStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__E_STOP__TRAITS_HPP_
