// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IMU__TRAITS_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_msg/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace capella_ros_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Imu & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: magnetic_field
  {
    out << "magnetic_field: ";
    to_flow_style_yaml(msg.magnetic_field, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Imu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: magnetic_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_field:\n";
    to_block_style_yaml(msg.magnetic_field, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Imu & msg, bool use_flow_style = false)
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
  const capella_ros_msg::msg::Imu & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_msg::msg::Imu & msg)
{
  return capella_ros_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_msg::msg::Imu>()
{
  return "capella_ros_msg::msg::Imu";
}

template<>
inline const char * name<capella_ros_msg::msg::Imu>()
{
  return "capella_ros_msg/msg/Imu";
}

template<>
struct has_fixed_size<capella_ros_msg::msg::Imu>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<capella_ros_msg::msg::Imu>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<capella_ros_msg::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IMU__TRAITS_HPP_
