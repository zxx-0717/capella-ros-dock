#ifndef CAPELLA_ROS_DOCK__TF2_TO_ODOM_HPP_
#define CAPELLA_ROS_DOCK__TF2_TO_ODOM_HPP_

#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "tf2/utils.h"
#include <chrono>
#include <angles/angles.h>

namespace capella_ros_dock
{
        class TF2ToOdom : public rclcpp::Node
        {
                public:
                        explicit TF2ToOdom(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
                        ~TF2ToOdom(){}

                nav_msgs::msg::Odometry odom_dummy_;
                rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_dummy_pub_;
                rclcpp::TimerBase::SharedPtr odom_dummy_timer_;
                std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
                std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

                geometry_msgs::msg::TransformStamped tf_stamed_last_;
                geometry_msgs::msg::TransformStamped tf_stamed_current_;
                double tf_time_last_;
                double tf_time_current_;
                
                void odom_dummy_timer_callback();
                bool getTransform(const std::string & refFrame, const std::string & childFrame, geometry_msgs::msg::TransformStamped & transform);
        };

} // end of namespace

#endif