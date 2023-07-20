// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/IrData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IrData in the package capella_ros_msg.
typedef struct capella_ros_msg__msg__IrData
{
  uint8_t ir1_data;
  uint8_t ir2_data;
} capella_ros_msg__msg__IrData;

// Struct for a sequence of capella_ros_msg__msg__IrData.
typedef struct capella_ros_msg__msg__IrData__Sequence
{
  capella_ros_msg__msg__IrData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__IrData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__STRUCT_H_
