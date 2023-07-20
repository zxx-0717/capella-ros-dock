// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/DetectResult.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'result'
#include "capella_ros_msg/msg/detail/single_detector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__DetectResult __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__DetectResult __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectResult_
{
  using Type = DetectResult_<ContainerAllocator>;

  explicit DetectResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _result_type =
    std::vector<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::vector<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<capella_ros_msg::msg::SingleDetector_<ContainerAllocator>>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::DetectResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::DetectResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::DetectResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::DetectResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__DetectResult
    std::shared_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__DetectResult
    std::shared_ptr<capella_ros_msg::msg::DetectResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectResult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectResult_

// alias to use template instance with default allocator
using DetectResult =
  capella_ros_msg::msg::DetectResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__DETECT_RESULT__STRUCT_HPP_
