// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__AtomizeSwitchCtrStu __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__AtomizeSwitchCtrStu __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AtomizeSwitchCtrStu_
{
  using Type = AtomizeSwitchCtrStu_<ContainerAllocator>;

  explicit AtomizeSwitchCtrStu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emer_button = false;
      this->atomize_sw = false;
      this->strength = 0;
    }
  }

  explicit AtomizeSwitchCtrStu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emer_button = false;
      this->atomize_sw = false;
      this->strength = 0;
    }
  }

  // field types and members
  using _emer_button_type =
    bool;
  _emer_button_type emer_button;
  using _atomize_sw_type =
    bool;
  _atomize_sw_type atomize_sw;
  using _strength_type =
    uint8_t;
  _strength_type strength;

  // setters for named parameter idiom
  Type & set__emer_button(
    const bool & _arg)
  {
    this->emer_button = _arg;
    return *this;
  }
  Type & set__atomize_sw(
    const bool & _arg)
  {
    this->atomize_sw = _arg;
    return *this;
  }
  Type & set__strength(
    const uint8_t & _arg)
  {
    this->strength = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__AtomizeSwitchCtrStu
    std::shared_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__AtomizeSwitchCtrStu
    std::shared_ptr<capella_ros_msg::msg::AtomizeSwitchCtrStu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AtomizeSwitchCtrStu_ & other) const
  {
    if (this->emer_button != other.emer_button) {
      return false;
    }
    if (this->atomize_sw != other.atomize_sw) {
      return false;
    }
    if (this->strength != other.strength) {
      return false;
    }
    return true;
  }
  bool operator!=(const AtomizeSwitchCtrStu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AtomizeSwitchCtrStu_

// alias to use template instance with default allocator
using AtomizeSwitchCtrStu =
  capella_ros_msg::msg::AtomizeSwitchCtrStu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__STRUCT_HPP_
