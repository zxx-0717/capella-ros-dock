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

                // client
                client_bluetooth = this->create_client<capella_ros_msg::srv::ChargePileWifi>("/bluetooth_bssid");
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
                

                std::thread thread1(std::bind(&ManualDock::manual_dock_check_callback, this));
                thread1.detach();
                // auto cb_group_check_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
                // charger_position_timer_ = this->create_wall_timer(std::chrono::seconds(10), std::bind(&ManualDock::manual_dock_check_callback, this));

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
                        msg_pub.data = charger_position_;
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
                robot_x = position.getX();
                robot_y = position.getY();
                robot_yaw = tf2::getYaw(robot_pose.getRotation());
                // RCLCPP_INFO(this->get_logger(), "pose_x: %f", robot_x);
                // RCLCPP_INFO(this->get_logger(), "pose_y: %f", robot_y);
                // RCLCPP_INFO(this->get_logger(), "yaw: %f", robot_yaw);
                if(in_charger_range(robot_x, robot_y, robot_yaw))
                {
                        charger_position_ = true;
                }
                else
                {
                        charger_position_ = false;
                }

                std_msgs::msg::Bool msg_pub;
                msg_pub.data = this->charger_position_;
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

        bool ManualDock::in_charger_range(float x, float y, float yaw)
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
                                if (charger_visible
                                        && charger_position_ 
                                        && !charger_state.is_docking 
                                        && !charger_state.is_charging)
                                {
                                        RCLCPP_INFO(this->get_logger(), "robot is in charger position range, and it is not in docking state, and it is not charging, start manual dock...");
                                        RCLCPP_INFO(this->get_logger(), "connect bluetooth %s(marker_id: %d)...", this->bluetooth_mac.c_str(), this->marker_id);
                                        auto request1 = std::make_shared<capella_ros_msg::srv::ChargePileWifi::Request>();
                                        request1->ssid = this->bluetooth_mac;
                                        while(!client_bluetooth->wait_for_service(1s))
                                        {
                                                RCLCPP_INFO(this->get_logger(), "connect bluetooth service is not available, wating...");
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
                                                RCLCPP_INFO(get_logger(), "robot's position is not in charger_range.(x: %f, y: %f)", robot_x, robot_y);
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

        void ManualDock::client_bluetooth_callback(const rclcpp::Client<capella_ros_msg::srv::ChargePileWifi>::SharedFuture future)
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