// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/IrdetectionStatus.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRDETECTION_STATUS__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRDETECTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__IrdetectionStatus __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__IrdetectionStatus __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrdetectionStatus_
{
  using Type = IrdetectionStatus_<ContainerAllocator>;

  explicit IrdetectionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->irdetection_status = 0;
    }
  }

  explicit IrdetectionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->irdetection_status = 0;
    }
  }

  // field types and members
  using _irdetection_status_type =
    uint8_t;
  _irdetection_status_type irdetection_status;

  // setters for named parameter idiom
  Type & set__irdetection_status(
    const uint8_t & _arg)
  {
    this->irdetection_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrdetectionStatus
    std::shared_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrdetectionStatus
    std::shared_ptr<capella_ros_service_interfaces::msg::IrdetectionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrdetectionStatus_ & other) const
  {
    if (this->irdetection_status != other.irdetection_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrdetectionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrdetectionStatus_

// alias to use template instance with default allocator
using IrdetectionStatus =
  capella_ros_service_interfaces::msg::IrdetectionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRDETECTION_STATUS__STRUCT_HPP_
