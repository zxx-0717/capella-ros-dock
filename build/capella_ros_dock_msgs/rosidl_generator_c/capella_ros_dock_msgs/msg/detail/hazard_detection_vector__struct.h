// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_dock_msgs:msg/HazardDetectionVector.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__STRUCT_H_
#define CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "capella_ros_dock_msgs/msg/detail/hazard_detection__struct.h"

/// Struct defined in msg/HazardDetectionVector in the package capella_ros_dock_msgs.
/**
  * This message contains a vector of detected hazards.
 */
typedef struct capella_ros_dock_msgs__msg__HazardDetectionVector
{
  std_msgs__msg__Header header;
  capella_ros_dock_msgs__msg__HazardDetection__Sequence detections;
} capella_ros_dock_msgs__msg__HazardDetectionVector;

// Struct for a sequence of capella_ros_dock_msgs__msg__HazardDetectionVector.
typedef struct capella_ros_dock_msgs__msg__HazardDetectionVector__Sequence
{
  capella_ros_dock_msgs__msg__HazardDetectionVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_dock_msgs__msg__HazardDetectionVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_DOCK_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__STRUCT_H_
