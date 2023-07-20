// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/IrData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__IrData __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__IrData __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrData_
{
  using Type = IrData_<ContainerAllocator>;

  explicit IrData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ir1_data = 0;
      this->ir2_data = 0;
    }
  }

  explicit IrData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ir1_data = 0;
      this->ir2_data = 0;
    }
  }

  // field types and members
  using _ir1_data_type =
    uint8_t;
  _ir1_data_type ir1_data;
  using _ir2_data_type =
    uint8_t;
  _ir2_data_type ir2_data;

  // setters for named parameter idiom
  Type & set__ir1_data(
    const uint8_t & _arg)
  {
    this->ir1_data = _arg;
    return *this;
  }
  Type & set__ir2_data(
    const uint8_t & _arg)
  {
    this->ir2_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::IrData_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::IrData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::IrData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::IrData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__IrData
    std::shared_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__IrData
    std::shared_ptr<capella_ros_msg::msg::IrData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrData_ & other) const
  {
    if (this->ir1_data != other.ir1_data) {
      return false;
    }
    if (this->ir2_data != other.ir2_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrData_

// alias to use template instance with default allocator
using IrData =
  capella_ros_msg::msg::IrData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__STRUCT_HPP_
