// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/IrtemperatureData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_IrtemperatureData_height
{
public:
  explicit Init_IrtemperatureData_height(::capella_ros_service_interfaces::msg::IrtemperatureData & msg)
  : msg_(msg)
  {}
  ::capella_ros_service_interfaces::msg::IrtemperatureData height(::capella_ros_service_interfaces::msg::IrtemperatureData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrtemperatureData msg_;
};

class Init_IrtemperatureData_width
{
public:
  explicit Init_IrtemperatureData_width(::capella_ros_service_interfaces::msg::IrtemperatureData & msg)
  : msg_(msg)
  {}
  Init_IrtemperatureData_height width(::capella_ros_service_interfaces::msg::IrtemperatureData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_IrtemperatureData_height(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrtemperatureData msg_;
};

class Init_IrtemperatureData_center_y
{
public:
  explicit Init_IrtemperatureData_center_y(::capella_ros_service_interfaces::msg::IrtemperatureData & msg)
  : msg_(msg)
  {}
  Init_IrtemperatureData_width center_y(::capella_ros_service_interfaces::msg::IrtemperatureData::_center_y_type arg)
  {
    msg_.center_y = std::move(arg);
    return Init_IrtemperatureData_width(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrtemperatureData msg_;
};

class Init_IrtemperatureData_center_x
{
public:
  explicit Init_IrtemperatureData_center_x(::capella_ros_service_interfaces::msg::IrtemperatureData & msg)
  : msg_(msg)
  {}
  Init_IrtemperatureData_center_y center_x(::capella_ros_service_interfaces::msg::IrtemperatureData::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_IrtemperatureData_center_y(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrtemperatureData msg_;
};

class Init_IrtemperatureData_irtemperature
{
public:
  Init_IrtemperatureData_irtemperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrtemperatureData_center_x irtemperature(::capella_ros_service_interfaces::msg::IrtemperatureData::_irtemperature_type arg)
  {
    msg_.irtemperature = std::move(arg);
    return Init_IrtemperatureData_center_x(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::IrtemperatureData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::IrtemperatureData>()
{
  return capella_ros_service_interfaces::msg::builder::Init_IrtemperatureData_irtemperature();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRTEMPERATURE_DATA__BUILDER_HPP_
