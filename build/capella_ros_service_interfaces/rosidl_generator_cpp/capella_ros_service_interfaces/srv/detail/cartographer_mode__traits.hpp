// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_service_interfaces:srv/CartographerMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__TRAITS_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_service_interfaces/srv/detail/cartographer_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CartographerMode_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartographerMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartographerMode_Request & msg, bool use_flow_style = false)
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

}  // namespace capella_ros_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_service_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_service_interfaces::srv::CartographerMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::srv::CartographerMode_Request & msg)
{
  return capella_ros_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::srv::CartographerMode_Request>()
{
  return "capella_ros_service_interfaces::srv::CartographerMode_Request";
}

template<>
inline const char * name<capella_ros_service_interfaces::srv::CartographerMode_Request>()
{
  return "capella_ros_service_interfaces/srv/CartographerMode_Request";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::srv::CartographerMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::srv::CartographerMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_service_interfaces::srv::CartographerMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace capella_ros_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CartographerMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cart_status
  {
    out << "cart_status: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartographerMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cart_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cart_status: ";
    rosidl_generator_traits::value_to_yaml(msg.cart_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartographerMode_Response & msg, bool use_flow_style = false)
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

}  // namespace capella_ros_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_service_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_service_interfaces::srv::CartographerMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::srv::CartographerMode_Response & msg)
{
  return capella_ros_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::srv::CartographerMode_Response>()
{
  return "capella_ros_service_interfaces::srv::CartographerMode_Response";
}

template<>
inline const char * name<capella_ros_service_interfaces::srv::CartographerMode_Response>()
{
  return "capella_ros_service_interfaces/srv/CartographerMode_Response";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::srv::CartographerMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::srv::CartographerMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_service_interfaces::srv::CartographerMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<capella_ros_service_interfaces::srv::CartographerMode>()
{
  return "capella_ros_service_interfaces::srv::CartographerMode";
}

template<>
inline const char * name<capella_ros_service_interfaces::srv::CartographerMode>()
{
  return "capella_ros_service_interfaces/srv/CartographerMode";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::srv::CartographerMode>
  : std::integral_constant<
    bool,
    has_fixed_size<capella_ros_service_interfaces::srv::CartographerMode_Request>::value &&
    has_fixed_size<capella_ros_service_interfaces::srv::CartographerMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<capella_ros_service_interfaces::srv::CartographerMode>
  : std::integral_constant<
    bool,
    has_bounded_size<capella_ros_service_interfaces::srv::CartographerMode_Request>::value &&
    has_bounded_size<capella_ros_service_interfaces::srv::CartographerMode_Response>::value
  >
{
};

template<>
struct is_service<capella_ros_service_interfaces::srv::CartographerMode>
  : std::true_type
{
};

template<>
struct is_service_request<capella_ros_service_interfaces::srv::CartographerMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<capella_ros_service_interfaces::srv::CartographerMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__TRAITS_HPP_
