// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/IrtemperatureData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IrtemperatureData in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__msg__IrtemperatureData
{
  /// highest temperature of face area
  float irtemperature;
  /// x center of face area
  uint16_t center_x;
  /// y center of face area
  uint16_t center_y;
  /// width of face area
  uint16_t width;
  /// height of face area
  uint16_t height;
} capella_ros_service_interfaces__msg__IrtemperatureData;

// Struct for a sequence of capella_ros_service_interfaces__msg__IrtemperatureData.
typedef struct capella_ros_service_interfaces__msg__IrtemperatureData__Sequence
{
  capella_ros_service_interfaces__msg__IrtemperatureData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__IrtemperatureData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__STRUCT_H_
