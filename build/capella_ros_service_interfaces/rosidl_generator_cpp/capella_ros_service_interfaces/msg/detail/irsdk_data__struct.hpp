// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/IrsdkData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__IrsdkData __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__IrsdkData __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrsdkData_
{
  using Type = IrsdkData_<ContainerAllocator>;

  explicit IrsdkData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit IrsdkData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _temperature_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__temperature(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrsdkData
    std::shared_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrsdkData
    std::shared_ptr<capella_ros_service_interfaces::msg::IrsdkData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrsdkData_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrsdkData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrsdkData_

// alias to use template instance with default allocator
using IrsdkData =
  capella_ros_service_interfaces::msg::IrsdkData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__STRUCT_HPP_
