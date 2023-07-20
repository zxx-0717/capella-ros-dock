// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__MissionStatus __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_status = 0;
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_status = 0;
    }
  }

  // field types and members
  using _mission_status_type =
    uint8_t;
  _mission_status_type mission_status;

  // setters for named parameter idiom
  Type & set__mission_status(
    const uint8_t & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MISSION_STATUS_IDLE =
    0u;
  static constexpr uint8_t MISSION_STATUS_CARTO =
    1u;
  static constexpr uint8_t MISSION_STATUS_NAV =
    2u;
  static constexpr uint8_t MISSION_STATUS_INFRARED =
    3u;

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__MissionStatus
    std::shared_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__MissionStatus
    std::shared_ptr<capella_ros_service_interfaces::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->mission_status != other.mission_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  capella_ros_service_interfaces::msg::MissionStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::MISSION_STATUS_IDLE;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::MISSION_STATUS_CARTO;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::MISSION_STATUS_NAV;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::MISSION_STATUS_INFRARED;

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
