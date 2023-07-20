// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_msg:srv/ChargePileWifi.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__STRUCT_H_
#define CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChargePileWifi in the package capella_ros_msg.
typedef struct capella_ros_msg__srv__ChargePileWifi_Request
{
  /// wifi SSID code
  uint64_t ssid;
} capella_ros_msg__srv__ChargePileWifi_Request;

// Struct for a sequence of capella_ros_msg__srv__ChargePileWifi_Request.
typedef struct capella_ros_msg__srv__ChargePileWifi_Request__Sequence
{
  capella_ros_msg__srv__ChargePileWifi_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__srv__ChargePileWifi_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChargePileWifi in the package capella_ros_msg.
typedef struct capella_ros_msg__srv__ChargePileWifi_Response
{
  bool success;
} capella_ros_msg__srv__ChargePileWifi_Response;

// Struct for a sequence of capella_ros_msg__srv__ChargePileWifi_Response.
typedef struct capella_ros_msg__srv__ChargePileWifi_Response__Sequence
{
  capella_ros_msg__srv__ChargePileWifi_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_msg__srv__ChargePileWifi_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__STRUCT_H_
