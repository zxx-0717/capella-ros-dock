// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'irtemp_and_coord'
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__IrimageData __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__IrimageData __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrimageData_
{
  using Type = IrimageData_<ContainerAllocator>;

  explicit IrimageData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IrimageData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _irimage_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _irimage_type irimage;
  using _irtemp_and_coord_type =
    std::vector<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>>;
  _irtemp_and_coord_type irtemp_and_coord;

  // setters for named parameter idiom
  Type & set__irimage(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->irimage = _arg;
    return *this;
  }
  Type & set__irtemp_and_coord(
    const std::vector<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<capella_ros_service_interfaces::msg::IrtemperatureData_<ContainerAllocator>>> & _arg)
  {
    this->irtemp_and_coord = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrimageData
    std::shared_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__IrimageData
    std::shared_ptr<capella_ros_service_interfaces::msg::IrimageData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrimageData_ & other) const
  {
    if (this->irimage != other.irimage) {
      return false;
    }
    if (this->irtemp_and_coord != other.irtemp_and_coord) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrimageData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrimageData_

// alias to use template instance with default allocator
using IrimageData =
  capella_ros_service_interfaces::msg::IrimageData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__STRUCT_HPP_
