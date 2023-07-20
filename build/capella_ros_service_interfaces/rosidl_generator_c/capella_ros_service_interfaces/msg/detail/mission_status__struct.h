// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MISSION_STATUS_IDLE'.
enum
{
  capella_ros_service_interfaces__msg__MissionStatus__MISSION_STATUS_IDLE = 0
};

/// Constant 'MISSION_STATUS_CARTO'.
enum
{
  capella_ros_service_interfaces__msg__MissionStatus__MISSION_STATUS_CARTO = 1
};

/// Constant 'MISSION_STATUS_NAV'.
enum
{
  capella_ros_service_interfaces__msg__MissionStatus__MISSION_STATUS_NAV = 2
};

/// Constant 'MISSION_STATUS_INFRARED'.
enum
{
  capella_ros_service_interfaces__msg__MissionStatus__MISSION_STATUS_INFRARED = 3
};

/// Struct defined in msg/MissionStatus in the package capella_ros_service_interfaces.
/**
  * if nav and carto off : mission_status = 0
  * if carto on : mission_status = 1; 
  * if nav on : mission_status = 2
  * if infrared on : mission_status = 3
 */
typedef struct capella_ros_service_interfaces__msg__MissionStatus
{
  uint8_t mission_status;
} capella_ros_service_interfaces__msg__MissionStatus;

// Struct for a sequence of capella_ros_service_interfaces__msg__MissionStatus.
typedef struct capella_ros_service_interfaces__msg__MissionStatus__Sequence
{
  capella_ros_service_interfaces__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
