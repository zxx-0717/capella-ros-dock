// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/ChargeMarkerVisible.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__ChargeMarkerVisible __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__ChargeMarkerVisible __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargeMarkerVisible_
{
  using Type = ChargeMarkerVisible_<ContainerAllocator>;

  explicit ChargeMarkerVisible_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_visible = false;
    }
  }

  explicit ChargeMarkerVisible_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_visible = false;
    }
  }

  // field types and members
  using _marker_visible_type =
    bool;
  _marker_visible_type marker_visible;

  // setters for named parameter idiom
  Type & set__marker_visible(
    const bool & _arg)
  {
    this->marker_visible = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__ChargeMarkerVisible
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__ChargeMarkerVisible
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeMarkerVisible_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeMarkerVisible_ & other) const
  {
    if (this->marker_visible != other.marker_visible) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeMarkerVisible_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeMarkerVisible_

// alias to use template instance with default allocator
using ChargeMarkerVisible =
  capella_ros_service_interfaces::msg::ChargeMarkerVisible_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__STRUCT_HPP_
