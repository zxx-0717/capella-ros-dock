// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__ChargeState __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__ChargeState __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargeState_
{
  using Type = ChargeState_<ContainerAllocator>;

  explicit ChargeState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pid = "";
      this->has_contact = false;
      this->is_charging = false;
      this->is_docking = false;
    }
  }

  explicit ChargeState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pid = "";
      this->has_contact = false;
      this->is_charging = false;
      this->is_docking = false;
    }
  }

  // field types and members
  using _pid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pid_type pid;
  using _has_contact_type =
    bool;
  _has_contact_type has_contact;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _is_docking_type =
    bool;
  _is_docking_type is_docking;

  // setters for named parameter idiom
  Type & set__pid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pid = _arg;
    return *this;
  }
  Type & set__has_contact(
    const bool & _arg)
  {
    this->has_contact = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__is_docking(
    const bool & _arg)
  {
    this->is_docking = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__ChargeState
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__ChargeState
    std::shared_ptr<capella_ros_service_interfaces::msg::ChargeState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeState_ & other) const
  {
    if (this->pid != other.pid) {
      return false;
    }
    if (this->has_contact != other.has_contact) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->is_docking != other.is_docking) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeState_

// alias to use template instance with default allocator
using ChargeState =
  capella_ros_service_interfaces::msg::ChargeState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_STATE__STRUCT_HPP_
