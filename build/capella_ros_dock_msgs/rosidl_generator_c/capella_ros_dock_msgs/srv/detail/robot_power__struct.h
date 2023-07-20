// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_dock_msgs:srv/RobotPower.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__ROBOT_POWER__STRUCT_H_
#define CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__ROBOT_POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RobotPower in the package capella_ros_dock_msgs.
typedef struct capella_ros_dock_msgs__srv__RobotPower_Request
{
  uint8_t structure_needs_at_least_one_member;
} capella_ros_dock_msgs__srv__RobotPower_Request;

// Struct for a sequence of capella_ros_dock_msgs__srv__RobotPower_Request.
typedef struct capella_ros_dock_msgs__srv__RobotPower_Request__Sequence
{
  capella_ros_dock_msgs__srv__RobotPower_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_dock_msgs__srv__RobotPower_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotPower in the package capella_ros_dock_msgs.
typedef struct capella_ros_dock_msgs__srv__RobotPower_Response
{
  /// indicate successful application of command, robot may power down before response is transmitted
  bool success;
  /// informational for result, robot may power down before response is transmitted
  rosidl_runtime_c__String message;
} capella_ros_dock_msgs__srv__RobotPower_Response;

// Struct for a sequence of capella_ros_dock_msgs__srv__RobotPower_Response.
typedef struct capella_ros_dock_msgs__srv__RobotPower_Response__Sequence
{
  capella_ros_dock_msgs__srv__RobotPower_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_dock_msgs__srv__RobotPower_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_DOCK_MSGS__SRV__DETAIL__ROBOT_POWER__STRUCT_H_
