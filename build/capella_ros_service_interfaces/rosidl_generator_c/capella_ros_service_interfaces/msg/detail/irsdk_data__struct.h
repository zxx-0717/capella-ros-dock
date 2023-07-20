// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/IrsdkData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'temperature'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IrsdkData in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__msg__IrsdkData
{
  /// infrared c++ sdk image data
  sensor_msgs__msg__Image image;
  /// infrared c++ sdk temperature data
  rosidl_runtime_c__float__Sequence temperature;
} capella_ros_service_interfaces__msg__IrsdkData;

// Struct for a sequence of capella_ros_service_interfaces__msg__IrsdkData.
typedef struct capella_ros_service_interfaces__msg__IrsdkData__Sequence
{
  capella_ros_service_interfaces__msg__IrsdkData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__IrsdkData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__STRUCT_H_
