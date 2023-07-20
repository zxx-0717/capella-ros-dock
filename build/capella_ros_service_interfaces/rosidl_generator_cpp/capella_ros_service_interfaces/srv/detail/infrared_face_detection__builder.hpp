// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:srv/InfraredFaceDetection.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/srv/detail/infrared_face_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfraredFaceDetection_Request_infrared_face_detection
{
public:
  Init_InfraredFaceDetection_Request_infrared_face_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::srv::InfraredFaceDetection_Request infrared_face_detection(::capella_ros_service_interfaces::srv::InfraredFaceDetection_Request::_infrared_face_detection_type arg)
  {
    msg_.infrared_face_detection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::InfraredFaceDetection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::InfraredFaceDetection_Request>()
{
  return capella_ros_service_interfaces::srv::builder::Init_InfraredFaceDetection_Request_infrared_face_detection();
}

}  // namespace capella_ros_service_interfaces


namespace capella_ros_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfraredFaceDetection_Response_face_detection_status
{
public:
  Init_InfraredFaceDetection_Response_face_detection_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_service_interfaces::srv::InfraredFaceDetection_Response face_detection_status(::capella_ros_service_interfaces::srv::InfraredFaceDetection_Response::_face_detection_status_type arg)
  {
    msg_.face_detection_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::srv::InfraredFaceDetection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::srv::InfraredFaceDetection_Response>()
{
  return capella_ros_service_interfaces::srv::builder::Init_InfraredFaceDetection_Response_face_detection_status();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__BUILDER_HPP_
