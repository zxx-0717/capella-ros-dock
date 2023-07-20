// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:srv/InfraredFaceDetection.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Request __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Request __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InfraredFaceDetection_Request_
{
  using Type = InfraredFaceDetection_Request_<ContainerAllocator>;

  explicit InfraredFaceDetection_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->infrared_face_detection = 0;
    }
  }

  explicit InfraredFaceDetection_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->infrared_face_detection = 0;
    }
  }

  // field types and members
  using _infrared_face_detection_type =
    uint8_t;
  _infrared_face_detection_type infrared_face_detection;

  // setters for named parameter idiom
  Type & set__infrared_face_detection(
    const uint8_t & _arg)
  {
    this->infrared_face_detection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfraredFaceDetection_Request_ & other) const
  {
    if (this->infrared_face_detection != other.infrared_face_detection) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfraredFaceDetection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfraredFaceDetection_Request_

// alias to use template instance with default allocator
using InfraredFaceDetection_Request =
  capella_ros_service_interfaces::srv::InfraredFaceDetection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capella_ros_service_interfaces


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Response __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Response __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InfraredFaceDetection_Response_
{
  using Type = InfraredFaceDetection_Response_<ContainerAllocator>;

  explicit InfraredFaceDetection_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->face_detection_status = 0;
    }
  }

  explicit InfraredFaceDetection_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->face_detection_status = 0;
    }
  }

  // field types and members
  using _face_detection_status_type =
    uint8_t;
  _face_detection_status_type face_detection_status;

  // setters for named parameter idiom
  Type & set__face_detection_status(
    const uint8_t & _arg)
  {
    this->face_detection_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__InfraredFaceDetection_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfraredFaceDetection_Response_ & other) const
  {
    if (this->face_detection_status != other.face_detection_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfraredFaceDetection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfraredFaceDetection_Response_

// alias to use template instance with default allocator
using InfraredFaceDetection_Response =
  capella_ros_service_interfaces::srv::InfraredFaceDetection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capella_ros_service_interfaces

namespace capella_ros_service_interfaces
{

namespace srv
{

struct InfraredFaceDetection
{
  using Request = capella_ros_service_interfaces::srv::InfraredFaceDetection_Request;
  using Response = capella_ros_service_interfaces::srv::InfraredFaceDetection_Response;
};

}  // namespace srv

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__INFRARED_FACE_DETECTION__STRUCT_HPP_
