// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:srv/CartographerMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Request __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartographerMode_Request_
{
  using Type = CartographerMode_Request_<ContainerAllocator>;

  explicit CartographerMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CartographerMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint8_t CARTO_MODE =
    1u;

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartographerMode_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartographerMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartographerMode_Request_

// alias to use template instance with default allocator
using CartographerMode_Request =
  capella_ros_service_interfaces::srv::CartographerMode_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CartographerMode_Request_<ContainerAllocator>::CARTO_MODE;

}  // namespace srv

}  // namespace capella_ros_service_interfaces


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Response __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartographerMode_Response_
{
  using Type = CartographerMode_Response_<ContainerAllocator>;

  explicit CartographerMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cart_status = 0;
    }
  }

  explicit CartographerMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cart_status = 0;
    }
  }

  // field types and members
  using _cart_status_type =
    uint8_t;
  _cart_status_type cart_status;

  // setters for named parameter idiom
  Type & set__cart_status(
    const uint8_t & _arg)
  {
    this->cart_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__CartographerMode_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::CartographerMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartographerMode_Response_ & other) const
  {
    if (this->cart_status != other.cart_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartographerMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartographerMode_Response_

// alias to use template instance with default allocator
using CartographerMode_Response =
  capella_ros_service_interfaces::srv::CartographerMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capella_ros_service_interfaces

namespace capella_ros_service_interfaces
{

namespace srv
{

struct CartographerMode
{
  using Request = capella_ros_service_interfaces::srv::CartographerMode_Request;
  using Response = capella_ros_service_interfaces::srv::CartographerMode_Response;
};

}  // namespace srv

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__CARTOGRAPHER_MODE__STRUCT_HPP_
