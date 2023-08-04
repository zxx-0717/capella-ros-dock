

#include "capella_ros_dock/hazards_vector_publisher.hpp"

#include <string>
#include <vector>

#include "rclcpp_components/register_node_macro.hpp"

namespace capella_ros_dock
{

HazardsVectorPublisher::HazardsVectorPublisher(const rclcpp::NodeOptions & options)
: rclcpp::Node("hazard_detection_vector_node", options)
{
  // Topic parameter to publish hazards vector to
  publisher_topic_ =
    this->declare_parameter("publisher_topic", "/hazard_detection");

  // Subscription topics parameter
  subscription_topics_ =
    this->declare_parameter("subscription_topics", std::vector<std::string>());

  // Publish rate parameter in Hz
  const double publish_rate =
    this->declare_parameter("publish_rate", 30.0);

  publisher_ = create_publisher<capella_ros_dock_msgs::msg::HazardDetectionVector>(
    publisher_topic_, rclcpp::SensorDataQoS().reliable());
  RCLCPP_INFO_STREAM(get_logger(), "Advertised topic: " << publisher_topic_);

  timer_ = rclcpp::create_timer(
    this,
    this->get_clock(),
    rclcpp::Duration(std::chrono::duration<double>(1 / publish_rate)), [this]() {
      std::lock_guard<std::mutex> lock{this->mutex_};

      // Set header timestamp.
      this->msg_.header.stamp = now();

      // Publish detected vector.
      this->publisher_->publish(this->msg_);
      this->msg_.detections.clear();
    });

  // Set header frame_id.
  this->msg_.header.frame_id = "base_link";

  // Create subscriptions
  for (std::string topic : subscription_topics_) {
    subs_vector_.push_back(
      (create_subscription<capella_ros_dock_msgs::msg::HazardDetection>(
        topic, rclcpp::SensorDataQoS(),
        [this](const capella_ros_dock_msgs::msg::HazardDetection::SharedPtr msg) {
          std::lock_guard<std::mutex> lock{this->mutex_};
          this->msg_.detections.push_back(*msg);
        })));
    RCLCPP_INFO_STREAM(get_logger(), "Subscription to topic: " << topic);
  }
}

}  // namespace capella_ros_dock

RCLCPP_COMPONENTS_REGISTER_NODE(capella_ros_dock::HazardsVectorPublisher)
