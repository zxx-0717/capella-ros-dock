// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_msg:srv/ChargePileWifi.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__BUILDER_HPP_
#define CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_msg/srv/detail/charge_pile_wifi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_msg
{

namespace srv
{

namespace builder
{

class Init_ChargePileWifi_Request_ssid
{
public:
  Init_ChargePileWifi_Request_ssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_msg::srv::ChargePileWifi_Request ssid(::capella_ros_msg::srv::ChargePileWifi_Request::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::srv::ChargePileWifi_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::srv::ChargePileWifi_Request>()
{
  return capella_ros_msg::srv::builder::Init_ChargePileWifi_Request_ssid();
}

}  // namespace capella_ros_msg


namespace capella_ros_msg
{

namespace srv
{

namespace builder
{

class Init_ChargePileWifi_Response_success
{
public:
  Init_ChargePileWifi_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capella_ros_msg::srv::ChargePileWifi_Response success(::capella_ros_msg::srv::ChargePileWifi_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_msg::srv::ChargePileWifi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_msg::srv::ChargePileWifi_Response>()
{
  return capella_ros_msg::srv::builder::Init_ChargePileWifi_Response_success();
}

}  // namespace capella_ros_msg

#endif  // CAPELLA_ROS_MSG__SRV__DETAIL__CHARGE_PILE_WIFI__BUILDER_HPP_
