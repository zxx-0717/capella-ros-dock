// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/Battery.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__Battery __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__Battery __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Battery_
{
  using Type = Battery_<ContainerAllocator>;

  explicit Battery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery = 0.0f;
      this->res_cap = 0.0f;
    }
  }

  explicit Battery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery = 0.0f;
      this->res_cap = 0.0f;
    }
  }

  // field types and members
  using _battery_type =
    float;
  _battery_type battery;
  using _res_cap_type =
    float;
  _res_cap_type res_cap;

  // setters for named parameter idiom
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__res_cap(
    const float & _arg)
  {
    this->res_cap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::Battery_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::Battery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::Battery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::Battery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__Battery
    std::shared_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__Battery
    std::shared_ptr<capella_ros_msg::msg::Battery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Battery_ & other) const
  {
    if (this->battery != other.battery) {
      return false;
    }
    if (this->res_cap != other.res_cap) {
      return false;
    }
    return true;
  }
  bool operator!=(const Battery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Battery_

// alias to use template instance with default allocator
using Battery =
  capella_ros_msg::msg::Battery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__BATTERY__STRUCT_HPP_
