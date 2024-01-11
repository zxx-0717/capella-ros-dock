#ifndef CAPELLA_ROS_DOCK__MANUAL_DOCK_NODE_HPP_
#define CAPELLA_ROS_DOCK__MANUAL_DOCK_NODE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "capella_ros_service_interfaces/msg/charge_state.hpp"
#include "aruco_msgs/msg/pose_with_id.hpp"
#include "aruco_msgs/msg/marker_and_mac_vector.hpp"
#include "capella_ros_service_interfaces/msg/charge_state.hpp"
#include "capella_ros_service_interfaces/msg/charge_marker_visible.hpp"
#include "std_srvs/srv/empty.hpp"
#include "std_msgs/msg/bool.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "tf2/utils.h"
#include <thread>
#include "charge_manager_msgs/srv/connect_bluetooth.hpp"
#include "std_msgs/msg/bool.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "rclcpp/executor.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "std_msgs/msg/float32.hpp"
#include "angles/angles.h"

namespace capella_ros_dock
{

class ManualDock : public rclcpp::Node
{

public:
        explicit ManualDock(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
        ~ManualDock(){}

        aruco_msgs::msg::MarkerAndMacVector marker_and_mac;
        capella_ros_service_interfaces::msg::ChargeState charger_state;
        aruco_msgs::msg::PoseWithId pose_with_id;

        float pose_x_min, pose_x_max, pose_y_min, pose_y_max, yaw_min, yaw_max;
        int marker_id;
        std::string bluetooth_mac;
        bool charger_position_{false};
        bool last_charger_position_{false};
        bool charger_position_pub_first{false};
        float robot_x_marker, robot_y_marker, robot_yaw_marker;
        bool processing{false};
        bool charger_visible{false};

        rclcpp::Client<charge_manager_msgs::srv::ConnectBluetooth>::SharedPtr client_bluetooth;
        rclcpp::Client<std_srvs::srv::Empty>::SharedPtr client_start_charging;

        void init_params();
        bool in_charger_range_marker(float x, float y, float yaw);
        bool in_charger_range_map(float x, float y, float yaw);
        
        // subscriptions
        rclcpp::Subscription<aruco_msgs::msg::MarkerAndMacVector>::SharedPtr marker_and_mac_sub_;
        rclcpp::Subscription<capella_ros_service_interfaces::msg::ChargeState>::SharedPtr charger_state_sub_;
        rclcpp::Subscription<capella_ros_service_interfaces::msg::ChargeMarkerVisible>::SharedPtr charger_visible_sub_;
        rclcpp::Subscription<aruco_msgs::msg::PoseWithId>::SharedPtr pose_with_id_sub_;
        rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr is_undocking_state_sub_;
        rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr is_docking_state_sub_;
        rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr charger_pose_map_sub_;
        rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr localization_score_sub_;

        void marker_and_mac_sub_callback(aruco_msgs::msg::MarkerAndMacVector);
        void charger_state_sub_callback(capella_ros_service_interfaces::msg::ChargeState);
        void pose_with_id_sub_callback(aruco_msgs::msg::PoseWithId);
        void charger_visible_sub_callback(capella_ros_service_interfaces::msg::ChargeMarkerVisible);
        void is_undocking_state_callback(std_msgs::msg::Bool);
        void is_docking_state_callback(std_msgs::msg::Bool);
        void charger_pose_map_sub_callback(geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr);
        bool getTransform(const std::string & refFrame, const std::string & childFrame,geometry_msgs::msg::TransformStamped & transform);
        void localization_sub_callback(std_msgs::msg::Float32);
        
        float is_undocking_state_last_time_sub;
        float is_undocking_state_timeout = 10.0;
        bool is_undocking_state = false;

        float is_docking_state_last_time_sub;
        float is_docking_state_timeout = 10.0;
        bool is_docking_state = false;

        float robot_x = 999.0;
        float robot_y = 999.0;
        float robot_yaw = 0.0;

        void getRobotPose(float& x, float& y, float& z);

        // publisher
        rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr charger_position_pub_;

        void manual_dock_check_callback();
        void client_bluetooth_callback(const rclcpp::Client<charge_manager_msgs::srv::ConnectBluetooth>::SharedFuture future);

        std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
        std::unique_ptr<tf2_ros::Buffer> tf_buffer_;

        float charger_pose_x, charger_pose_y, charger_pose_yaw;
        float localization_score = 0.0;

};
} // end of namespace

#endif // end of CAPELLA_ROS_DOCK__MANUAL_DOCK_NODE_HPP_