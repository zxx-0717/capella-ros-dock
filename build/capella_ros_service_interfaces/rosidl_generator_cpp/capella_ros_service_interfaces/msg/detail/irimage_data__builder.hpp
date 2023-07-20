// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/irimage_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_IrimageData_irtemp_and_coord
{
public:
  explicit Init_IrimageData_irtemp_and_coord(::capella_ros_service_interfaces::msg::IrimageData & msg)
  : msg_(msg)
  {}
  ::capella_ros_service_interfaces::msg::IrimageData irtemp_and_coord(::capella_ros_service_interfaces::msg::IrimageData::_irtemp_and_coord_type arg)
  {
    msg_.irtemp_and_coord = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrimageData msg_;
};

class Init_IrimageData_irimage
{
public:
  Init_IrimageData_irimage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrimageData_irtemp_and_coord irimage(::capella_ros_service_interfaces::msg::IrimageData::_irimage_type arg)
  {
    msg_.irimage = std::move(arg);
    return Init_IrimageData_irtemp_and_coord(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrimageData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::IrimageData>()
{
  return capella_ros_service_interfaces::msg::builder::Init_IrimageData_irimage();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRIMAGE_DATA__BUILDER_HPP_
