// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AtomizeSwitchCtrStu in the package capella_ros_msg.
/**
  * 雾化开关控制状态消息
 */
typedef struct capella_ros_msg__msg__AtomizeSwitchCtrStu
{
  /// 紧急按钮状态
  bool emer_button;
  /// 雾化控制状态
  bool atomize_sw;
  /// 雾化强度 0x01~0x03
  uint8_t strength;
} capella_ros_msg__msg__AtomizeSwitchCtrStu;

// Struct for a sequence of capella_ros_msg__msg__AtomizeSwitchCtrStu.
typedef struct capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence
{
  capella_ros_msg__msg__AtomizeSwitchCtrStu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__STRUCT_H_
