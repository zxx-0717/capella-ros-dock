// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/ContactDriveStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ContactDriveStu in the package capella_ros_msg.
typedef struct capella_ros_msg__msg__ContactDriveStu
{
  /// true is contact,false is not contact
  bool contact_stu;
  /// 0x01 is arrive mooring point, 0x02 is leave charge pile
  uint8_t drive_stu;
} capella_ros_msg__msg__ContactDriveStu;

// Struct for a sequence of capella_ros_msg__msg__ContactDriveStu.
typedef struct capella_ros_msg__msg__ContactDriveStu__Sequence
{
  capella_ros_msg__msg__ContactDriveStu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__ContactDriveStu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__STRUCT_H_
