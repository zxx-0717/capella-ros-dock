// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Battery in the package capella_ros_msg.
/**
  * Battery消息，调用float类型
 */
typedef struct capella_ros_msg__msg__Battery
{
  float battery;
  /// 剩余容量
  float res_cap;
} capella_ros_msg__msg__Battery;

// Struct for a sequence of capella_ros_msg__msg__Battery.
typedef struct capella_ros_msg__msg__Battery__Sequence
{
  capella_ros_msg__msg__Battery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__Battery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__STRUCT_H_
