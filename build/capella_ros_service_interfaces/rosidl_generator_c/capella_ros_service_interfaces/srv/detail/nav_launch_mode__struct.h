// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:srv/NavLaunchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAV_MODE'.
/**
  *  nav_mode: start_nav = 1
 */
enum
{
  capella_ros_service_interfaces__srv__NavLaunchMode_Request__NAV_MODE = 1
};

// Include directives for member types
// Member 'image'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/NavLaunchMode in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__srv__NavLaunchMode_Request
{
  rosidl_runtime_c__uint8__Sequence image;
  double resolution;
  double x;
  double y;
  double z;
  int32_t negate;
  double occupied_thresh;
  double free_thresh;
} capella_ros_service_interfaces__srv__NavLaunchMode_Request;

// Struct for a sequence of capella_ros_service_interfaces__srv__NavLaunchMode_Request.
typedef struct capella_ros_service_interfaces__srv__NavLaunchMode_Request__Sequence
{
  capella_ros_service_interfaces__srv__NavLaunchMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__srv__NavLaunchMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/NavLaunchMode in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__srv__NavLaunchMode_Response
{
  uint8_t nav_status;
} capella_ros_service_interfaces__srv__NavLaunchMode_Response;

// Struct for a sequence of capella_ros_service_interfaces__srv__NavLaunchMode_Response.
typedef struct capella_ros_service_interfaces__srv__NavLaunchMode_Response__Sequence
{
  capella_ros_service_interfaces__srv__NavLaunchMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__srv__NavLaunchMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__STRUCT_H_
