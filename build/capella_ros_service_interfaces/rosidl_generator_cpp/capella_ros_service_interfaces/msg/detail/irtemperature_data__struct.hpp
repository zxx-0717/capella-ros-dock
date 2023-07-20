// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/IrtemperatureData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__IrtemperatureData __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__IrtemperatureData __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrtemperatureData_
{
  using Type = IrtemperatureData_<ContainerAllocator>;

  explicit IrtemperatureData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->irtemperature = 0.0f;
      this->center_x = 0;
      this->center_y = 0;
      this->width = 0;
      this->height = 0;
    }
  }

  explicit IrtemperatureData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->irtemperature = 0.0f;
      this->center_x = 0;
      this->center_y = 0;
      this->width = 0;
      this->height = 0;
    }
  }

  // field types and members
  using _irtemperature_type =
    float;
  _irtemperature_type irtemperature;
  using _center_x_type =
    uint16_t;
  _center_x_type center_x;
  using _center_y_type =
    uint16_t;
  _center_y_type center_y;
  using _width_type =
    uint16_t;
  _width_type width;
  using _height_type =
    uint16_t;
  _height_type height;

  // setters for named parameter idiom
  Type & set__irtemperature(
    const float & _arg)
  {
    this->irtemperature = _arg;
    return *this;
  }
  Type & set__center_x(
    const uint16_t & _arg)
  {
    this->center_x = _arg;
    return *this;
  }
  Type & set__center_y(
    const uint16_t & _arg)
  {
    this->center_y = _arg;
    return *this;
  }
  Type & set__width(
    const uint16_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint16_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrtemperatureData
    std::shared_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrtemperatureData
    std::shared_ptr<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrtemperatureData_ & other) const
  {
    if (this->irtemperature != other.irtemperature) {
      return false;
    }
    if (this->center_x != other.center_x) {
      return false;
    }
    if (this->center_y != other.center_y) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrtemperatureData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrtemperatureData_

// alias to use template instance with default allocator
using IrtemperatureData =
  capella_ros_service_interfaces::msg::IrtemperatureData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__STRUCT_HPP_
