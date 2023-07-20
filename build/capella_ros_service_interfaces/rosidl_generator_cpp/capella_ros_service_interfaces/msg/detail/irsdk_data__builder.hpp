// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/IrsdkData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/irsdk_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_IrsdkData_temperature
{
public:
  explicit Init_IrsdkData_temperature(::capella_ros_service_interfaces::msg::IrsdkData & msg)
  : msg_(msg)
  {}
  ::capella_ros_service_interfaces::msg::IrsdkData temperature(::capella_ros_service_interfaces::msg::IrsdkData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrsdkData msg_;
};

class Init_IrsdkData_image
{
public:
  Init_IrsdkData_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrsdkData_temperature image(::capella_ros_service_interfaces::msg::IrsdkData::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_IrsdkData_temperature(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrsdkData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::IrsdkData>()
{
  return capella_ros_service_interfaces::msg::builder::Init_IrsdkData_image();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__BUILDER_HPP_
