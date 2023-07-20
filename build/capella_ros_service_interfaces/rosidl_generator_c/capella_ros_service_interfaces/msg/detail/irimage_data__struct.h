// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'irimage'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'irtemp_and_coord'
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__struct.h"

/// Struct defined in msg/IrimageData in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__msg__IrimageData
{
  /// irfrared face detection image data
  rosidl_runtime_c__uint8__Sequence irimage;
  /// irfrared face detection temperature data
  capella_ros_service_interfaces__msg__IrtemperatureData__Sequence irtemp_and_coord;
} capella_ros_service_interfaces__msg__IrimageData;

// Struct for a sequence of capella_ros_service_interfaces__msg__IrimageData.
typedef struct capella_ros_service_interfaces__msg__IrimageData__Sequence
{
  capella_ros_service_interfaces__msg__IrimageData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__IrimageData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__STRUCT_H_
