// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/DetectResult.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "capella_ros_msg/msg/detail/single_detector__struct.h"

/// Struct defined in msg/DetectResult in the package capella_ros_msg.
typedef struct capella_ros_msg__msg__DetectResult
{
  capella_ros_msg__msg__SingleDetector__Sequence result;
} capella_ros_msg__msg__DetectResult;

// Struct for a sequence of capella_ros_msg__msg__DetectResult.
typedef struct capella_ros_msg__msg__DetectResult__Sequence
{
  capella_ros_msg__msg__DetectResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__DetectResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__STRUCT_H_
