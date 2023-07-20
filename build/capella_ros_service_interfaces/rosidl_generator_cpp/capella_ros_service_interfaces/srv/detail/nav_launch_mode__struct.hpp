// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capella_ros_service_interfaces:srv/NavLaunchMode.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__STRUCT_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Request __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavLaunchMode_Request_
{
  using Type = NavLaunchMode_Request_<ContainerAllocator>;

  explicit NavLaunchMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->negate = 0l;
      this->occupied_thresh = 0.0;
      this->free_thresh = 0.0;
    }
  }

  explicit NavLaunchMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->negate = 0l;
      this->occupied_thresh = 0.0;
      this->free_thresh = 0.0;
    }
  }

  // field types and members
  using _image_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _image_type image;
  using _resolution_type =
    double;
  _resolution_type resolution;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _negate_type =
    int32_t;
  _negate_type negate;
  using _occupied_thresh_type =
    double;
  _occupied_thresh_type occupied_thresh;
  using _free_thresh_type =
    double;
  _free_thresh_type free_thresh;

  // setters for named parameter idiom
  Type & set__image(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__resolution(
    const double & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__negate(
    const int32_t & _arg)
  {
    this->negate = _arg;
    return *this;
  }
  Type & set__occupied_thresh(
    const double & _arg)
  {
    this->occupied_thresh = _arg;
    return *this;
  }
  Type & set__free_thresh(
    const double & _arg)
  {
    this->free_thresh = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NAV_MODE =
    1;

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Request
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavLaunchMode_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->negate != other.negate) {
      return false;
    }
    if (this->occupied_thresh != other.occupied_thresh) {
      return false;
    }
    if (this->free_thresh != other.free_thresh) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavLaunchMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavLaunchMode_Request_

// alias to use template instance with default allocator
using NavLaunchMode_Request =
  capella_ros_service_interfaces::srv::NavLaunchMode_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t NavLaunchMode_Request_<ContainerAllocator>::NAV_MODE;

}  // namespace srv

}  // namespace capella_ros_service_interfaces


#ifndef _WIN32
# define DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Response __declspec(deprecated)
#endif

namespace capella_ros_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavLaunchMode_Response_
{
  using Type = NavLaunchMode_Response_<ContainerAllocator>;

  explicit NavLaunchMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_status = 0;
    }
  }

  explicit NavLaunchMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_status = 0;
    }
  }

  // field types and members
  using _nav_status_type =
    uint8_t;
  _nav_status_type nav_status;

  // setters for named parameter idiom
  Type & set__nav_status(
    const uint8_t & _arg)
  {
    this->nav_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capella_ros_service_interfaces__srv__NavLaunchMode_Response
    std::shared_ptr<capella_ros_service_interfaces::srv::NavLaunchMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavLaunchMode_Response_ & other) const
  {
    if (this->nav_status != other.nav_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavLaunchMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavLaunchMode_Response_

// alias to use template instance with default allocator
using NavLaunchMode_Response =
  capella_ros_service_interfaces::srv::NavLaunchMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capella_ros_service_interfaces

namespace capella_ros_service_interfaces
{

namespace srv
{

struct NavLaunchMode
{
  using Request = capella_ros_service_interfaces::srv::NavLaunchMode_Request;
  using Response = capella_ros_service_interfaces::srv::NavLaunchMode_Response;
};

}  // namespace srv

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__SRV__DETAIL__NAV_LAUNCH_MODE__STRUCT_HPP_
