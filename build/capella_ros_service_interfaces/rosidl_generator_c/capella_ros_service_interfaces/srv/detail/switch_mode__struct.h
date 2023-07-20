// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:srv/SwitchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_IDLE'.
enum
{
  capella_ros_service_interfaces__srv__SwitchMode_Request__MODE_IDLE = 0
};

/// Constant 'MODE_NAV'.
enum
{
  capella_ros_service_interfaces__srv__SwitchMode_Request__MODE_NAV = 1
};

/// Constant 'MODE_CARTO'.
enum
{
  capella_ros_service_interfaces__srv__SwitchMode_Request__MODE_CARTO = 2
};

/// Struct defined in srv/SwitchMode in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__srv__SwitchMode_Request
{
  uint8_t mode;
} capella_ros_service_interfaces__srv__SwitchMode_Request;

// Struct for a sequence of capella_ros_service_interfaces__srv__SwitchMode_Request.
typedef struct capella_ros_service_interfaces__srv__SwitchMode_Request__Sequence
{
  capella_ros_service_interfaces__srv__SwitchMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__srv__SwitchMode_Request__Sequence;


// Constants defined in the message

/// Constant 'STATUS_OK'.
enum
{
  capella_ros_service_interfaces__srv__SwitchMode_Response__STATUS_OK = 0
};

/// Constant 'STATUS_FAILED'.
enum
{
  capella_ros_service_interfaces__srv__SwitchMode_Response__STATUS_FAILED = 255
};

/// Struct defined in srv/SwitchMode in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__srv__SwitchMode_Response
{
  uint8_t status;
} capella_ros_service_interfaces__srv__SwitchMode_Response;

// Struct for a sequence of capella_ros_service_interfaces__srv__SwitchMode_Response.
typedef struct capella_ros_service_interfaces__srv__SwitchMode_Response__Sequence
{
  capella_ros_service_interfaces__srv__SwitchMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__srv__SwitchMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__STRUCT_H_
