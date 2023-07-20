// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_service_interfaces:srv/NavLaunchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__TRAITS_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavLaunchMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    if (msg.image.size() == 0) {
      out << "image: []";
    } else {
      out << "image: [";
      size_t pending_items = msg.image.size();
      for (auto item : msg.image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: negate
  {
    out << "negate: ";
    rosidl_generator_traits::value_to_yaml(msg.negate, out);
    out << ", ";
  }

  // member: occupied_thresh
  {
    out << "occupied_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_thresh, out);
    out << ", ";
  }

  // member: free_thresh
  {
    out << "free_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.free_thresh, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavLaunchMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image.size() == 0) {
      out << "image: []\n";
    } else {
      out << "image:\n";
      for (auto item : msg.image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: negate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "negate: ";
    rosidl_generator_traits::value_to_yaml(msg.negate, out);
    out << "\n";
  }

  // member: occupied_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_thresh, out);
    out << "\n";
  }

  // member: free_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.free_thresh, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavLaunchMode_Request & msg, bool use_flow_style = false)
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
  const capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::srv::NavLaunchMode_Request & msg)
{
  return capella_ros_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::srv::NavLaunchMode_Request>()
{
  return "capella_ros_service_interfaces::srv::NavLaunchMode_Request";
}

template<>
inline const char * name<capella_ros_service_interfaces::srv::NavLaunchMode_Request>()
{
  return "capella_ros_service_interfaces/srv/NavLaunchMode_Request";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::srv::NavLaunchMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::srv::NavLaunchMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capella_ros_service_interfaces::srv::NavLaunchMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace capella_ros_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavLaunchMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: nav_status
  {
    out << "nav_status: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavLaunchMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_status: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavLaunchMode_Response & msg, bool use_flow_style = false)
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
  const capella_ros_service_interfaces::srv::NavLaunchMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::srv::NavLaunchMode_Response & msg)
{
  return capella_ros_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::srv::NavLaunchMode_Response>()
{
  return "capella_ros_service_interfaces::srv::NavLaunchMode_Response";
}

template<>
inline const char * name<capella_ros_service_interfaces::srv::NavLaunchMode_Response>()
{
  return "capella_ros_service_interfaces/srv/NavLaunchMode_Response";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::srv::NavLaunchMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::srv::NavLaunchMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_service_interfaces::srv::NavLaunchMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<capella_ros_service_interfaces::srv::NavLaunchMode>()
{
  return "capella_ros_service_interfaces::srv::NavLaunchMode";
}

template<>
inline const char * name<capella_ros_service_interfaces::srv::NavLaunchMode>()
{
  return "capella_ros_service_interfaces/srv/NavLaunchMode";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::srv::NavLaunchMode>
  : std::integral_constant<
    bool,
    has_fixed_size<capella_ros_service_interfaces::srv::NavLaunchMode_Request>::value &&
    has_fixed_size<capella_ros_service_interfaces::srv::NavLaunchMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<capella_ros_service_interfaces::srv::NavLaunchMode>
  : std::integral_constant<
    bool,
    has_bounded_size<capella_ros_service_interfaces::srv::NavLaunchMode_Request>::value &&
    has_bounded_size<capella_ros_service_interfaces::srv::NavLaunchMode_Response>::value
  >
{
};

template<>
struct is_service<capella_ros_service_interfaces::srv::NavLaunchMode>
  : std::true_type
{
};

template<>
struct is_service_request<capella_ros_service_interfaces::srv::NavLaunchMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<capella_ros_service_interfaces::srv::NavLaunchMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__TRAITS_HPP_
