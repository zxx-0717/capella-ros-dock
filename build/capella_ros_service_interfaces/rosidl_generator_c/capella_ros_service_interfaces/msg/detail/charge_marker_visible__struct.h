// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/ChargeMarkerVisible.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChargeMarkerVisible in the package capella_ros_service_interfaces.
/**
  * 是否检测到充电桩二维码
 */
typedef struct capella_ros_service_interfaces__msg__ChargeMarkerVisible
{
  bool marker_visible;
} capella_ros_service_interfaces__msg__ChargeMarkerVisible;

// Struct for a sequence of capella_ros_service_interfaces__msg__ChargeMarkerVisible.
typedef struct capella_ros_service_interfaces__msg__ChargeMarkerVisible__Sequence
{
  capella_ros_service_interfaces__msg__ChargeMarkerVisible * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__ChargeMarkerVisible__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__STRUCT_H_
