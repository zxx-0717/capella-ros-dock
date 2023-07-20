// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:srv/SwitchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Request __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchMode_Request_
{
  using Type = SwitchMode_Request_<ContainerAllocator>;

  explicit SwitchMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit SwitchMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_IDLE =
    0u;
  static constexpr uint8_t MODE_NAV =
    1u;
  static constexpr uint8_t MODE_CARTO =
    2u;

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchMode_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchMode_Request_

// alias to use template instance with default allocator
using SwitchMode_Request =
  capella_ros_service_interfaces::srv::SwitchMode_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SwitchMode_Request_<ContainerAllocator>::MODE_IDLE;
template<typename ContainerAllocator>
constexpr uint8_t SwitchMode_Request_<ContainerAllocator>::MODE_NAV;
template<typename ContainerAllocator>
constexpr uint8_t SwitchMode_Request_<ContainerAllocator>::MODE_CARTO;

}  // namespace srv

}  // namespace capella_ros_service_interfaces


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Response __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchMode_Response_
{
  using Type = SwitchMode_Response_<ContainerAllocator>;

  explicit SwitchMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SwitchMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_OK =
    0u;
  static constexpr uint8_t STATUS_FAILED =
    255u;

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__SwitchMode_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::SwitchMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchMode_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchMode_Response_

// alias to use template instance with default allocator
using SwitchMode_Response =
  capella_ros_service_interfaces::srv::SwitchMode_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SwitchMode_Response_<ContainerAllocator>::STATUS_OK;
template<typename ContainerAllocator>
constexpr uint8_t SwitchMode_Response_<ContainerAllocator>::STATUS_FAILED;

}  // namespace srv

}  // namespace capella_ros_service_interfaces

namespace capella_ros_service_interfaces
{

namespace srv
{

struct SwitchMode
{
  using Request = capella_ros_service_interfaces::srv::SwitchMode_Request;
  using Response = capella_ros_service_interfaces::srv::SwitchMode_Response;
};

}  // namespace srv

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__SWITCH_MODE__STRUCT_HPP_
