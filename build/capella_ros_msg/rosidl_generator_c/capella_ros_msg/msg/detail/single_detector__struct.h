// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/SingleDetector.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SingleDetector in the package capella_ros_msg.
/**
  * part: 只检测到人体为0；检测到面部为1
  * x: 距离机器人前进方向的距离，单位m
  * y: 距离机器人y轴方向的距离，单位m
  * z: 高度
 */
typedef struct capella_ros_msg__msg__SingleDetector
{
  bool part;
  float x;
  float y;
  float z;
} capella_ros_msg__msg__SingleDetector;

// Struct for a sequence of capella_ros_msg__msg__SingleDetector.
typedef struct capella_ros_msg__msg__SingleDetector__Sequence
{
  capella_ros_msg__msg__SingleDetector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__SingleDetector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__STRUCT_H_
