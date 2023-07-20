// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IMU__STRUCT_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__msg__Imu __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__msg__Imu __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Imu_
{
  using Type = Imu_<ContainerAllocator>;

  explicit Imu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_acceleration(_init),
    angular_velocity(_init),
    magnetic_field(_init)
  {
    (void)_init;
  }

  explicit Imu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init),
    magnetic_field(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _magnetic_field_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _magnetic_field_type magnetic_field;

  // setters for named parameter idiom
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__magnetic_field(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->magnetic_field = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::msg::Imu_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::msg::Imu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::Imu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::msg::Imu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__msg__Imu
    std::shared_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__msg__Imu
    std::shared_ptr<capella_ros_msg::msg::Imu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu_ & other) const
  {
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->magnetic_field != other.magnetic_field) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu_

// alias to use template instance with default allocator
using Imu =
  capella_ros_msg::msg::Imu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IMU__STRUCT_HPP_
