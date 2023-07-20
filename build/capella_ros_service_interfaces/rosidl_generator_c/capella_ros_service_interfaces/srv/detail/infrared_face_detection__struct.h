// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:srv/InfraredFaceDetection.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InfraredFaceDetection in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__srv__InfraredFaceDetection_Request
{
  /// "1" start detction service, "0" stop detction service
  uint8_t infrared_face_detection;
} capella_ros_service_interfaces__srv__InfraredFaceDetection_Request;

// Struct for a sequence of capella_ros_service_interfaces__srv__InfraredFaceDetection_Request.
typedef struct capella_ros_service_interfaces__srv__InfraredFaceDetection_Request__Sequence
{
  capella_ros_service_interfaces__srv__InfraredFaceDetection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__srv__InfraredFaceDetection_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InfraredFaceDetection in the package capella_ros_service_interfaces.
typedef struct capella_ros_service_interfaces__srv__InfraredFaceDetection_Response
{
  /// 1 service on, 0 service off
  uint8_t face_detection_status;
} capella_ros_service_interfaces__srv__InfraredFaceDetection_Response;

// Struct for a sequence of capella_ros_service_interfaces__srv__InfraredFaceDetection_Response.
typedef struct capella_ros_service_interfaces__srv__InfraredFaceDetection_Response__Sequence
{
  capella_ros_service_interfaces__srv__InfraredFaceDetection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__srv__InfraredFaceDetection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__STRUCT_H_
