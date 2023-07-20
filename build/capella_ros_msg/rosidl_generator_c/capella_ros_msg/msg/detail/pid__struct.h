// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__PID__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PID in the package capella_ros_msg.
typedef struct capella_ros_msg__msg__PID
{
  float p;
  float d;
  float i;
} capella_ros_msg__msg__PID;

// Struct for a sequence of capella_ros_msg__msg__PID.
typedef struct capella_ros_msg__msg__PID__Sequence
{
  capella_ros_msg__msg__PID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__PID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__PID__STRUCT_H_
