#include "capella_ros_dock/manual_dock.hpp"
#include "rclcpp_components/register_node_macro.hpp"


using std::placeholders::_1;
using namespace std::chrono_literals;

namespace capella_ros_dock 
{
        ManualDock::ManualDock(const rclcpp::NodeOptions & options)
	: rclcpp::Node("manual_dock", options)
        {
                RCLCPP_INFO(this->get_logger(), "manual_dock node start.");
                init_params();

                // publisher
                charger_position_pub_ = this->create_publisher<std_msgs::msg::Bool>("charger_position_bool", rclcpp::QoS(rclcpp::KeepLast(1)).reliable().transient_local());
                // publish false for init
                std_msgs::msg::Bool msg_bool;
                msg_bool.data = false;
                charger_position_pub_->publish(msg_bool);

                // tf
                tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
	        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

                // client
                client_bluetooth = this->create_client<charge_manager_msgs::srv::ConnectBluetooth>("/connect_bluetooth");
                client_start_charging = this->create_client<std_srvs::srv::Empty>("/charger/start");

                rclcpp::CallbackGroup::SharedPtr cb_group1 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops1 = rclcpp::SubscriptionOptions();
                sub_ops1.callback_group = cb_group1;

                rclcpp::CallbackGroup::SharedPtr cb_group2 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops2 = rclcpp::SubscriptionOptions();
                sub_ops2.callback_group = cb_group2;

                rclcpp::CallbackGroup::SharedPtr cb_group3 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops3 = rclcpp::SubscriptionOptions();
                sub_ops3.callback_group = cb_group3;

                rclcpp::CallbackGroup::SharedPtr cb_group4 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops4 = rclcpp::SubscriptionOptions();
                sub_ops4.callback_group = cb_group4;

                rclcpp::CallbackGroup::SharedPtr cb_group5 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops5 = rclcpp::SubscriptionOptions();
                sub_ops5.callback_group = cb_group5;

                rclcpp::CallbackGroup::SharedPtr cb_group6 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops6 = rclcpp::SubscriptionOptions();
                sub_ops6.callback_group = cb_group6;

                rclcpp::CallbackGroup::SharedPtr cb_group7 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                rclcpp::SubscriptionOptions sub_ops7 = rclcpp::SubscriptionOptions();
                sub_ops7.callback_group = cb_group7;

                marker_and_mac_sub_ = this->create_subscription<aruco_msgs::msg::MarkerAndMacVector>(
                        "aruco_single/id_mac",
                        30,
                        std::bind(&ManualDock::marker_and_mac_sub_callback, this, std::placeholders::_1),
                        sub_ops1
                );
                charger_state_sub_ = this->create_subscription<capella_ros_service_interfaces::msg::ChargeState>(
                        "/charger/state",
                        30,
                        std::bind(&ManualDock::charger_state_sub_callback, this, std::placeholders::_1),
                        sub_ops2
                );
                pose_with_id_sub_ = this->create_subscription<aruco_msgs::msg::PoseWithId>(
                        "aruco_single/pose_with_id",
                        30,
                        std::bind(&ManualDock::pose_with_id_sub_callback, this, std::placeholders::_1),
                        sub_ops3
                );

                charger_visible_sub_ = this->create_subscription<capella_ros_service_interfaces::msg::ChargeMarkerVisible>(
                        "marker_visible",
                        30,
                        std::bind(&ManualDock::charger_visible_sub_callback, this, std::placeholders::_1),
                        sub_ops4
                );

                is_undocking_state_sub_ = this->create_subscription<std_msgs::msg::Bool>(
                        "is_undocking_state",
                        5,
                        std::bind(&ManualDock::is_undocking_state_callback, this, std::placeholders::_1),
                        sub_ops5
                );

                pose_map_sub_ = this->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
                        "/charger/pose",
                        rclcpp::QoS(1).transient_local().reliable(),
                        std::bind(&ManualDock::pose_map_sub_callback, this, std::placeholders::_1),
                        sub_ops6
                );

                localization_score_sub_ = this->create_subscription<std_msgs::msg::Float32>(
                        "/localization_score",
                        5,
                        std::bind(&ManualDock::localization_sub_callback, this, std::placeholders::_1),
                        sub_ops7
                );                

                std::thread thread1(std::bind(&ManualDock::manual_dock_check_callback, this));
                thread1.detach();
                // auto cb_group_check_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                // charger_position_timer_ = this->create_wall_timer(std::chrono::seconds(10), std::bind(&ManualDock::manual_dock_check_callback, this));

        }

        void ManualDock::getRobotPose(float& robot_x, float& robot_y, float& yaw)
        {
                if (localization_score > 0.6)
                {
                        tf2::Stamped<tf2::Transform> robotToMapStamped;
                        robotToMapStamped.setIdentity();
                        tf2::Transform robotToMap;
                        robotToMap.setIdentity();
                        geometry_msgs::msg::TransformStamped transform_stamped;
                        if (getTransform(std::string("map"), std::string("base_link"), transform_stamped))
                        {
                                tf2::fromMsg(transform_stamped, robotToMapStamped);
                                robotToMap = static_cast<tf2::Transform>(robotToMapStamped);
                                auto robot_position = robotToMap.getOrigin();
                                robot_x = robot_position.getX();
                                robot_y = robot_position.getY();
                                tf2::getYaw(robotToMap.getRotation());
                        }
                        else
                        {
                                robot_x = 999.0;
                                robot_y = 999.0;
                                yaw = 0.0;
                        }
                }
                else
                {
                        robot_x = 999.0;
                        robot_y = 999.0;
                        yaw = 0.0;
                }
        }

        void ManualDock::localization_sub_callback(std_msgs::msg::Float32 msg)
        {
                localization_score = msg.data;
        }

        bool ManualDock::in_charger_range_map(float x, float y, float yaw)
        {
                bool ret = false;
                if (std::hypot(robot_x - charger_pose_x, robot_y - charger_pose_y) > 4.0)
                {
                        ret = false;
                }
                else
                {
                        if (std::abs(robot_yaw - charger_pose_yaw) < 0.785)
                        {
                                ret = true;
                        }
                        else
                        {
                                ret = false;
                        }
                }

                return ret;
        }

        void ManualDock::pose_map_sub_callback(geometry_msgs::msg::PoseWithCovarianceStamped msg)
        {
                tf2::Transform tf;
                tf2::convert(msg, tf);
                charger_pose_x = tf.getOrigin().getX();
                charger_pose_y = tf.getOrigin().getY();
                charger_pose_yaw = tf2::getYaw(tf.getRotation());
        }

        bool ManualDock::getTransform(
	const std::string & refFrame, const std::string & childFrame,
	geometry_msgs::msg::TransformStamped & transform)
        {
                std::string errMsg;

                if (!tf_buffer_->canTransform(
                        refFrame, childFrame, tf2::TimePointZero,
                        tf2::durationFromSec(0.5), &errMsg))
                {
                        RCLCPP_ERROR_STREAM(this->get_logger(), "Unable to get pose from TF: " << errMsg);
                        return false;
                } else {
                        try {
                                transform = tf_buffer_->lookupTransform(
                                        refFrame, childFrame, tf2::TimePointZero, tf2::durationFromSec(
                                                0.5));
                        } catch (const tf2::TransformException & e) {
                                RCLCPP_ERROR_STREAM(
                                        this->get_logger(),
                                        "Error in lookupTransform of " << childFrame << " in " << refFrame << " : " << e.what());
                                return false;
                        }
                }
                return true;
        }

        void ManualDock::init_params()
        {
                this->declare_parameter<float>("pose_x_min", -0.9);
                this->declare_parameter<float>("pose_x_max", -0.4);
                this->declare_parameter<float>("pose_y_min", -0.1);
                this->declare_parameter<float>("pose_y_max", 0.1);
                this->declare_parameter<float>("yaw_min", -0.2);
                this->declare_parameter<float>("yaw_max", -0.2);

                this->get_parameter_or<float>("pose_x_min", pose_x_min, -0.9);
                this->get_parameter_or<float>("pose_x_max", pose_x_max, -0.4);
                this->get_parameter_or<float>("pose_y_min", pose_y_min, -0.1);
                this->get_parameter_or<float>("pose_y_max", pose_y_max, 0.1);
                this->get_parameter_or<float>("yaw_min", yaw_min, -0.2);
                this->get_parameter_or<float>("yaw_max", yaw_max, 0.2);
        }

        void ManualDock::marker_and_mac_sub_callback(aruco_msgs::msg::MarkerAndMacVector msg)
        {
                this->marker_and_mac = msg;
        }

        void ManualDock::charger_state_sub_callback(capella_ros_service_interfaces::msg::ChargeState msg)
        {
                this->charger_state = msg;
        }

        void ManualDock::charger_visible_sub_callback(capella_ros_service_interfaces::msg::ChargeMarkerVisible msg)
        {
                this->charger_visible = msg.marker_visible;
                if(!charger_visible)
                {
                        charger_position_ = false;
                        std_msgs::msg::Bool msg_pub;
                        msg_pub.data = charger_position_ || in_charger_range_map(robot_x, robot_y, robot_yaw);
                        if(!charger_position_pub_first)
                        {
                                charger_position_pub_first = true;
                                charger_position_pub_->publish(msg_pub);
                        }
                        else
                        {
                                if (last_charger_position_ != charger_position_)
                                {
                                        charger_position_pub_->publish(msg_pub);
                                }
                        }

                        last_charger_position_ = charger_position_;
                }
        }

        void ManualDock::pose_with_id_sub_callback(aruco_msgs::msg::PoseWithId msg)
        {
                this->pose_with_id = msg;
                this->marker_id = pose_with_id.marker_id;
                // RCLCPP_INFO(this->get_logger(), "marker_id: %d", marker_id);
                for(int i = 0; i < marker_and_mac.marker_and_mac_vector.size(); i++)
                {
                        if (marker_and_mac.marker_and_mac_vector[i].marker_id == marker_id)
                        {
                                this->bluetooth_mac = marker_and_mac.marker_and_mac_vector[i].bluetooth_mac;
                                break;
                        }
                }
                
                tf2::Transform robot_pose;
                tf2::convert(pose_with_id.pose.pose, robot_pose);
                auto position = robot_pose.getOrigin();
                robot_x_marker = position.getX();
                robot_y_marker = position.getY();
                robot_yaw_marker = tf2::getYaw(robot_pose.getRotation());
                // RCLCPP_INFO(this->get_logger(), "pose_x_marker: %f", robot_x_marker);
                // RCLCPP_INFO(this->get_logger(), "pose_y_marker: %f", robot_y_marker);
                // RCLCPP_INFO(this->get_logger(), "yaw_marker: %f", robot_yaw_marker);
                if(in_charger_range_marker(robot_x_marker, robot_y_marker, robot_yaw_marker))
                {
                        charger_position_ = true;
                }
                else
                {
                        charger_position_ = false;
                }

                std_msgs::msg::Bool msg_pub;
                msg_pub.data = this->charger_position_ || in_charger_range_map(robot_x, robot_y, robot_yaw);
                if(!charger_position_pub_first)
                {
                        charger_position_pub_first = true;
                        charger_position_pub_->publish(msg_pub);
                }
                else
                {
                        if (last_charger_position_ != charger_position_)
                        {
                                charger_position_pub_->publish(msg_pub);
                        }
                }

                last_charger_position_ = charger_position_;
        }

        void ManualDock::is_undocking_state_callback(std_msgs::msg::Bool msg)
        {
                is_undocking_state = msg.data;
                is_undocking_state_last_time_sub = this->get_clock()->now().seconds();
        }

        bool ManualDock::in_charger_range_marker(float x, float y, float yaw)
        {
                bool ret = false;
                if (x > pose_x_min && x < pose_x_max &&
                    y > pose_y_min && y < pose_y_max &&
                    yaw > yaw_min && yaw < yaw_max)
                {
                        ret = true;
                }
                return ret;
        }

        void ManualDock::manual_dock_check_callback()
        {
                while(true)
                {                        
                        if(!processing)
                        {
                                processing = true;
                                auto now_time = this->get_clock()->now().seconds();
                                if ((now_time - is_undocking_state_last_time_sub) > is_undocking_state_timeout)
                                {
                                        is_undocking_state = false;
                                }
                                bool manual_charge_satisfied = false;
                                manual_charge_satisfied = charger_visible
                                        && charger_position_ 
                                        && !charger_state.is_docking 
                                        && !charger_state.is_charging
                                        && !is_undocking_state;
                                if (manual_charge_satisfied)
                                {
                                        RCLCPP_INFO(this->get_logger(), "robot is in charger position range, and it is not in docking state, and it is not charging, start manual dock...");
                                        RCLCPP_INFO(this->get_logger(), "connect bluetooth %s(marker_id: %d)...", this->bluetooth_mac.c_str(), this->marker_id);
                                        auto request1 = std::make_shared<charge_manager_msgs::srv::ConnectBluetooth::Request>();
                                        request1->mac = this->bluetooth_mac;
                                        while(!client_bluetooth->wait_for_service(1s))
                                        {
                                                RCLCPP_INFO(this->get_logger(), "connect bluetooth service is not available, wating...");
                                                manual_charge_satisfied = charger_visible
                                                                                && charger_position_ 
                                                                                && !charger_state.is_docking 
                                                                                && !charger_state.is_charging
                                                                                && !is_undocking_state;
                                                if (!manual_charge_satisfied)
                                                break;
                                        }
                                        auto result1 = client_bluetooth->async_send_request(request1, std::bind(&ManualDock::client_bluetooth_callback, this, _1));                          
                                }
                                else
                                {
                                        if(!charger_visible)
                                        {
                                                RCLCPP_INFO(get_logger(), "robot can not see the marker.");
                                                continue;;                                        }
                                        if(!charger_position_ )
                                        {
                                                RCLCPP_INFO(get_logger(), "robot's position is not in charger_range.(x: %f, y: %f)", robot_x_marker, robot_y_marker);
                                                continue;
                                        }
                                        if(charger_state.is_docking)
                                        {
                                                RCLCPP_INFO(get_logger(), "robot's state is auto-charging.");
                                                continue;
                                        }
                                        if(charger_state.is_charging)
                                        {
                                                RCLCPP_INFO(get_logger(), "robot is charging.");
                                                continue;
                                        }                   
                
                                }
                        }
                        sleep(9);
                        processing = false;
                }                
        }

        void ManualDock::client_bluetooth_callback(const rclcpp::Client<charge_manager_msgs::srv::ConnectBluetooth>::SharedFuture future)
        {
                if(future.get()->success)
                {
                        RCLCPP_INFO(this->get_logger(), "bluetooth connection success");
                        RCLCPP_INFO(this->get_logger(), "call service /charger/start");
                        auto request2 = std::make_shared<std_srvs::srv::Empty::Request>();
                        auto result2 = client_start_charging->async_send_request(request2);
                }
                else
                {
                       RCLCPP_INFO(this->get_logger(), "bluetooth connection failed"); 
                }
        }


} // end of namespace


RCLCPP_COMPONENTS_REGISTER_NODE(capella_ros_dock::ManualDock)