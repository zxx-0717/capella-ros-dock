// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/SingleDetector.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__SingleDetector __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__SingleDetector __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SingleDetector_
{
  using Type = SingleDetector_<ContainerAllocator>;

  explicit SingleDetector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->part = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit SingleDetector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->part = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _part_type =
    bool;
  _part_type part;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__part(
    const bool & _arg)
  {
    this->part = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::SingleDetector_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::SingleDetector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__SingleDetector
    std::shared_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__SingleDetector
    std::shared_ptr<capella_ros_msg::msg::SingleDetector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SingleDetector_ & other) const
  {
    if (this->part != other.part) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SingleDetector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SingleDetector_

// alias to use template instance with default allocator
using SingleDetector =
  capella_ros_msg::msg::SingleDetector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__SINGLE_DETECTOR__STRUCT_HPP_
