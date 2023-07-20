// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/IrdetectionStatus.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRDETECTION_STATUS__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRDETECTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IrdetectionStatus in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__msg__IrdetectionStatus
{
  /// "1" irdetection on ; "0" irdetection off
  uint8_t irdetection_status;
} capella_ros_service_interfaces__msg__IrdetectionStatus;

// Struct for a sequence of capella_ros_service_interfaces__msg__IrdetectionStatus.
typedef struct capella_ros_service_interfaces__msg__IrdetectionStatus__Sequence
{
  capella_ros_service_interfaces__msg__IrdetectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__IrdetectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRDETECTION_STATUS__STRUCT_H_
