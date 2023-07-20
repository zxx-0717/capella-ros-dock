// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChargeState in the package capella_ros_service_interfaces.
/**
  * （序列号，接触状态，充电状态，对接执行状态）
 */
typedef struct capella_ros_service_interfaces__msg__ChargeState
{
  rosidl_runtime_c__String pid;
  bool has_contact;
  bool is_charging;
  bool is_docking;
} capella_ros_service_interfaces__msg__ChargeState;

// Struct for a sequence of capella_ros_service_interfaces__msg__ChargeState.
typedef struct capella_ros_service_interfaces__msg__ChargeState__Sequence
{
  capella_ros_service_interfaces__msg__ChargeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__ChargeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__STRUCT_H_
