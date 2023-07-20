// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/ContactDriveStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__ContactDriveStu __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__ContactDriveStu __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactDriveStu_
{
  using Type = ContactDriveStu_<ContainerAllocator>;

  explicit ContactDriveStu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contact_stu = false;
      this->drive_stu = 0;
    }
  }

  explicit ContactDriveStu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contact_stu = false;
      this->drive_stu = 0;
    }
  }

  // field types and members
  using _contact_stu_type =
    bool;
  _contact_stu_type contact_stu;
  using _drive_stu_type =
    uint8_t;
  _drive_stu_type drive_stu;

  // setters for named parameter idiom
  Type & set__contact_stu(
    const bool & _arg)
  {
    this->contact_stu = _arg;
    return *this;
  }
  Type & set__drive_stu(
    const uint8_t & _arg)
  {
    this->drive_stu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__ContactDriveStu
    std::shared_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__ContactDriveStu
    std::shared_ptr<capella_ros_msg::msg::ContactDriveStu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactDriveStu_ & other) const
  {
    if (this->contact_stu != other.contact_stu) {
      return false;
    }
    if (this->drive_stu != other.drive_stu) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactDriveStu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactDriveStu_

// alias to use template instance with default allocator
using ContactDriveStu =
  capella_ros_msg::msg::ContactDriveStu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__STRUCT_HPP_
