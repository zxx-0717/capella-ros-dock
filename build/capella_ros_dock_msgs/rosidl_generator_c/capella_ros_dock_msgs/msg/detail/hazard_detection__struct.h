// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_dock_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION__STRUCT_H_
#define CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BACKUP_LIMIT'.
/**
  * The robot has reached its backup limit. It will not drive further backward for safety reasons.
  * You can disable this limit through the "safety_override" parameter by setting it
  * to "backup_only" or "full".
  * The server can be used to set a default value for the parameter.
 */
enum
{
  capella_ros_dock_msgs__msg__HazardDetection__BACKUP_LIMIT = 0
};

/// Constant 'BUMP'.
/**
  * The robot has bumped against an obstacle
 */
enum
{
  capella_ros_dock_msgs__msg__HazardDetection__BUMP = 1
};

/// Constant 'CLIFF'.
/**
  * The robot detected a cliff
 */
enum
{
  capella_ros_dock_msgs__msg__HazardDetection__CLIFF = 2
};

/// Constant 'STALL'.
/**
  * The wheels of the robot are stalled against an obstacle
 */
enum
{
  capella_ros_dock_msgs__msg__HazardDetection__STALL = 3
};

/// Constant 'WHEEL_DROP'.
/**
  * The wheels of the robot are fully dropped
 */
enum
{
  capella_ros_dock_msgs__msg__HazardDetection__WHEEL_DROP = 4
};

/// Constant 'OBJECT_PROXIMITY'.
/**
  * The robot detects an obstacle in close proximity
 */
enum
{
  capella_ros_dock_msgs__msg__HazardDetection__OBJECT_PROXIMITY = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/HazardDetection in the package capella_ros_dock_msgs.
/**
  * This message describes a detected hazard.
  * The frame ID allows to retrieve the location of the sensor that made the detection.
 */
typedef struct capella_ros_dock_msgs__msg__HazardDetection
{
  std_msgs__msg__Header header;
  uint8_t type;
} capella_ros_dock_msgs__msg__HazardDetection;

// Struct for a sequence of capella_ros_dock_msgs__msg__HazardDetection.
typedef struct capella_ros_dock_msgs__msg__HazardDetection__Sequence
{
  capella_ros_dock_msgs__msg__HazardDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_dock_msgs__msg__HazardDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION__STRUCT_H_
