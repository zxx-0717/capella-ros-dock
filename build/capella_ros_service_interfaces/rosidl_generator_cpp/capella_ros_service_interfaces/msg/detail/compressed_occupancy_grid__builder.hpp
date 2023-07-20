// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capella_ros_service_interfaces:msg/CompressedOccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__BUILDER_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capella_ros_service_interfaces/msg/detail/compressed_occupancy_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace builder
{

class Init_CompressedOccupancyGrid_data
{
public:
  explicit Init_CompressedOccupancyGrid_data(::capella_ros_service_interfaces::msg::CompressedOccupancyGrid & msg)
  : msg_(msg)
  {}
  ::capella_ros_service_interfaces::msg::CompressedOccupancyGrid data(::capella_ros_service_interfaces::msg::CompressedOccupancyGrid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::CompressedOccupancyGrid msg_;
};

class Init_CompressedOccupancyGrid_info
{
public:
  explicit Init_CompressedOccupancyGrid_info(::capella_ros_service_interfaces::msg::CompressedOccupancyGrid & msg)
  : msg_(msg)
  {}
  Init_CompressedOccupancyGrid_data info(::capella_ros_service_interfaces::msg::CompressedOccupancyGrid::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CompressedOccupancyGrid_data(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::CompressedOccupancyGrid msg_;
};

class Init_CompressedOccupancyGrid_header
{
public:
  Init_CompressedOccupancyGrid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompressedOccupancyGrid_info header(::capella_ros_service_interfaces::msg::CompressedOccupancyGrid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CompressedOccupancyGrid_info(msg_);
  }

private:
  ::capella_ros_service_interfaces::msg::CompressedOccupancyGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::capella_ros_service_interfaces::msg::CompressedOccupancyGrid>()
{
  return capella_ros_service_interfaces::msg::builder::Init_CompressedOccupancyGrid_header();
}

}  // namespace capella_ros_service_interfaces

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__BUILDER_HPP_
