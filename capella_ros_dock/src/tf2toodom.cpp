#include "capella_ros_dock/tf2toodom.hpp"
#include "rclcpp_components/register_node_macro.hpp"

using namespace std::chrono_literals;

namespace capella_ros_dock
{
TF2ToOdom::TF2ToOdom(const rclcpp::NodeOptions & options)
	: rclcpp::Node("tf2_to_odom", options)
{
        RCLCPP_INFO(this->get_logger(), "tf2toodom node start.");
        tf_time_last_ = this->get_clock()->now().seconds(); 
        odom_dummy_ = nav_msgs::msg::Odometry();
        tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_stamed_last_ = geometry_msgs::msg::TransformStamped();
        tf_stamed_current_ = geometry_msgs::msg::TransformStamped();
        odom_dummy_timer_ = this->create_wall_timer(50ms, std::bind(&TF2ToOdom::odom_dummy_timer_callback));
}

bool TF2ToOdom::getTransform(
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
					0.05));
		} catch (const tf2::TransformException & e) {
			RCLCPP_ERROR_STREAM(
				this->get_logger(),
				"Error in lookupTransform of " << childFrame << " in " << refFrame << " : " << e.what());
			return false;
		}
	}
	return true;
}
        void TF2ToOdom::odom_dummy_timer_callback()
        {
                if(getTransform(std::string("map"), std::string("base_link"), tf_stamed_current_))
                {
                        tf_time_current_ = this->get_clock()->now().seconds();
                        auto delta_time = tf_time_current_ - tf_time_last_;

                        auto robot_x_last = tf_stamed_last_.transform.translation.x;
                        // auto robot_y_last = tf_stamed_last_.transform.translation.y;
                        auto robot_yaw_last = tf2::getYaw(tf_stamed_last_.transform.rotation);

                        auto robot_x_current = tf_stamed_current_.transform.translation.x;
                        // auto robot_y_current = tf_stamed_current_.transform.translation.y;
                        auto robot_yaw_current = tf2::getYaw(tf_stamed_current_.transform.rotation);

                        odom_dummy_.header = tf_stamed_current_.header;
                        odom_dummy_.child_frame_id = std::string("base_link");
                        odom_dummy_.pose.pose.position.x = tf_stamed_current_.transform.translation.x;
                        odom_dummy_.pose.pose.position.y = tf_stamed_current_.transform.translation.y;
                        odom_dummy_.pose.pose.position.z = tf_stamed_current_.transform.translation.z;
                        odom_dummy_.pose.pose.orientation = tf_stamed_current_.transform.rotation;
                        odom_dummy_.twist.twist.linear.x = (robot_x_current - robot_x_last) / delta_time;
                        // odom_dummy_.twist.twist.linear.y = (robot_y_current - robot_y_last) / delta_time;
                        odom_dummy_.twist.twist.angular.z = (robot_yaw_current - robot_yaw_last) / delta_time;

                        odom_dummy_pub_.publish(odom_dummy_);

                        tf_stamed_last_ = tf_stamed_current_;
                        tf_time_last_ = tf_time_current_;
                }

        }

} // end of namespace

RCLCPP_COMPONENTS_REGISTER_NODE(capella_ros_dock::TF2ToOdom)