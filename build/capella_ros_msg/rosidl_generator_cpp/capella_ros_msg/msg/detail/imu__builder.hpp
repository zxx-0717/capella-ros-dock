// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__IMU__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_Imu_magnetic_field
{
public:
  explicit Init_Imu_magnetic_field(::capella_ros_msg::msg::Imu & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::Imu magnetic_field(::capella_ros_msg::msg::Imu::_magnetic_field_type arg)
  {
    msg_.magnetic_field = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::Imu msg_;
};

class Init_Imu_angular_velocity
{
public:
  explicit Init_Imu_angular_velocity(::capella_ros_msg::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_magnetic_field angular_velocity(::capella_ros_msg::msg::Imu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu_magnetic_field(msg_);
  }

private:
  ::capella_ros_msg::msg::Imu msg_;
};

class Init_Imu_linear_acceleration
{
public:
  Init_Imu_linear_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_angular_velocity linear_acceleration(::capella_ros_msg::msg::Imu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Imu_angular_velocity(msg_);
  }

private:
  ::capella_ros_msg::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::Imu>()
{
  return capella_ros_msg::msg::builder::Init_Imu_linear_acceleration();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__IMU__BUILDER_HPP_
