// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IMU__STRUCT_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Imu in the package capella_ros_msg.
typedef struct capella_ros_msg__msg__Imu
{
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Vector3 magnetic_field;
} capella_ros_msg__msg__Imu;

// Struct for a sequence of capella_ros_msg__msg__Imu.
typedef struct capella_ros_msg__msg__Imu__Sequence
{
  capella_ros_msg__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IMU__STRUCT_H_
