// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:msg/CompressedOccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'info'
#include "nav_msgs/msg/detail/map_meta_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__msg__CompressedOccupancyGrid __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__msg__CompressedOccupancyGrid __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CompressedOccupancyGrid_
{
  using Type = CompressedOccupancyGrid_<ContainerAllocator>;

  explicit CompressedOccupancyGrid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    info(_init)
  {
    (void)_init;
  }

  explicit CompressedOccupancyGrid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _info_type =
    nav_msgs::msg::MapMetaData_<ContainerAllocator>;
  _info_type info;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__info(
    const nav_msgs::msg::MapMetaData_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__msg__CompressedOccupancyGrid
    std::shared_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__msg__CompressedOccupancyGrid
    std::shared_ptr<capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompressedOccupancyGrid_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompressedOccupancyGrid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompressedOccupancyGrid_

// alias to use template instance with default allocator
using CompressedOccupancyGrid =
  capella_ros_service_interfaces::msg::CompressedOccupancyGrid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__STRUCT_HPP_
