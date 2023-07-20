// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/PersonDistance.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__PERSON_DISTANCE__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__PERSON_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__PersonDistance __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__PersonDistance __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonDistance_
{
  using Type = PersonDistance_<ContainerAllocator>;

  explicit PersonDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->distance = 10.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->distance = 0.0;
    }
  }

  explicit PersonDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->distance = 10.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->distance = 0.0;
    }
  }

  // field types and members
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__PersonDistance
    std::shared_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__PersonDistance
    std::shared_ptr<capella_ros_service_interfaces::msg::PersonDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonDistance_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonDistance_

// alias to use template instance with default allocator
using PersonDistance =
  capella_ros_service_interfaces::msg::PersonDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__PERSON_DISTANCE__STRUCT_HPP_
