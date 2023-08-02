#ifndef CAPELLA_ROS_DOCK__CAMERA_POINT_CLOUD_PROCESS_HPP_
#define CAPELLA_ROS_DOCK__CAMERA_POINT_CLOUD_PROCESS_HPP_

#include "rclcpp/rclcpp.hpp"

namespace capella_ros_dock
{
class CameraPointCloudProcess : public rclcpp::Node
{
        CameraPointCloudProcess();
        ~CameraPointCloudProcess();
};


} // namespace capella_ros_dock

#endif // CAPELLA_ROS_DOCK__CAMERA_POINT_CLOUD_PROCESS_HPP_