// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_msg:srv/ChargePileWifi.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__STRUCT_HPP_
#define CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Request __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Request __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChargePileWifi_Request_
{
  using Type = ChargePileWifi_Request_<ContainerAllocator>;

  explicit ChargePileWifi_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = 0ull;
    }
  }

  explicit ChargePileWifi_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssid = 0ull;
    }
  }

  // field types and members
  using _ssid_type =
    uint64_t;
  _ssid_type ssid;

  // setters for named parameter idiom
  Type & set__ssid(
    const uint64_t & _arg)
  {
    this->ssid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Request
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Request
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargePileWifi_Request_ & other) const
  {
    if (this->ssid != other.ssid) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargePileWifi_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargePileWifi_Request_

// alias to use template instance with default allocator
using ChargePileWifi_Request =
  capella_ros_msg::srv::ChargePileWifi_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capella_ros_msg


#ifndef _WIN32
# define DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Response __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Response __declspec(deprecated)
#endif

namespace capella_ros_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChargePileWifi_Response_
{
  using Type = ChargePileWifi_Response_<ContainerAllocator>;

  explicit ChargePileWifi_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ChargePileWifi_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Response
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_msg__srv__ChargePileWifi_Response
    std::shared_ptr<capella_ros_msg::srv::ChargePileWifi_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargePileWifi_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargePileWifi_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargePileWifi_Response_

// alias to use template instance with default allocator
using ChargePileWifi_Response =
  capella_ros_msg::srv::ChargePileWifi_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capella_ros_msg

namespace capella_ros_msg
{

namespace srv
{

struct ChargePileWifi
{
  using Request = capella_ros_msg::srv::ChargePileWifi_Request;
  using Response = capella_ros_msg::srv::ChargePileWifi_Response;
};

}  // namespace srv

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__STRUCT_HPP_
