// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/IrData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/ir_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_IrData_ir2_data
{
public:
  explicit Init_IrData_ir2_data(::capella_ros_msg::msg::IrData & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::IrData ir2_data(::capella_ros_msg::msg::IrData::_ir2_data_type arg)
  {
    msg_.ir2_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::IrData msg_;
};

class Init_IrData_ir1_data
{
public:
  Init_IrData_ir1_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrData_ir2_data ir1_data(::capella_ros_msg::msg::IrData::_ir1_data_type arg)
  {
    msg_.ir1_data = std::move(arg);
    return Init_IrData_ir2_data(msg_);
  }

private:
  ::capella_ros_msg::msg::IrData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::IrData>()
{
  return capella_ros_msg::msg::builder::Init_IrData_ir1_data();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IR_DATA__BUILDER_HPP_
