// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:msg/ContactDriveStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__BUILDER_HPP_
#define CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/msg/detail/contact_drive_stu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace msg
{

namespace builder
{

class Init_ContactDriveStu_drive_stu
{
public:
  explicit Init_ContactDriveStu_drive_stu(::capella_ros_msg::msg::ContactDriveStu & msg)
  : msg_(msg)
  {}
  ::capella_ros_msg::msg::ContactDriveStu drive_stu(::capella_ros_msg::msg::ContactDriveStu::_drive_stu_type arg)
  {
    msg_.drive_stu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::msg::ContactDriveStu msg_;
};

class Init_ContactDriveStu_contact_stu
{
public:
  Init_ContactDriveStu_contact_stu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactDriveStu_drive_stu contact_stu(::capella_ros_msg::msg::ContactDriveStu::_contact_stu_type arg)
  {
    msg_.contact_stu = std::move(arg);
    return Init_ContactDriveStu_drive_stu(msg_);
  }

private:
  ::capella_ros_msg::msg::ContactDriveStu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::msg::ContactDriveStu>()
{
  return capella_ros_msg::msg::builder::Init_ContactDriveStu_contact_stu();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__CONTACT_DRIVE_STU__BUILDER_HPP_
