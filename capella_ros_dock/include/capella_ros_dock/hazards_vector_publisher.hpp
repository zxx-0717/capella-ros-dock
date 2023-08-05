

#ifndef CAPELLA_ROS_DOCK__HAZARDS_VECTOR_PUBLISHER_HPP_
#define CAPELLA_ROS_DOCK__HAZARDS_VECTOR_PUBLISHER_HPP_

#include <string>
#include <vector>

#include "capella_ros_dock_msgs/msg/hazard_detection.hpp"
#include "capella_ros_dock_msgs/msg/hazard_detection_vector.hpp"
#include "rclcpp/rclcpp.hpp"

namespace capella_ros_dock
{

class HazardsVectorPublisher : public rclcpp::Node
{
public:
  /// \brief Constructor
  explicit HazardsVectorPublisher(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  ~HazardsVectorPublisher();
private:
  // Publish aggregated detections on timer_'s frequency
  rclcpp::TimerBase::SharedPtr timer_;

  // Detection vector publisher
  rclcpp::Publisher<capella_ros_dock_msgs::msg::HazardDetectionVector>::SharedPtr publisher_;

  // Vector of subscriptions
  using HazardVectorSubscriptionPtr =
    std::vector<rclcpp::Subscription<capella_ros_dock_msgs::msg::HazardDetection>::SharedPtr>;
  HazardVectorSubscriptionPtr subs_vector_;

  // Mutex to protect access to subs_vector_ from different threads
  std::mutex mutex_;

  // Topic to publish hazards vector to
  std::string publisher_topic_;

  // Topics from where hazard messages will be received from
  std::vector<std::string> subscription_topics_;

  // Message containing a vector to store detected hazards
  capella_ros_dock_msgs::msg::HazardDetectionVector msg_;
};

}  // namespace capella_ros_dock

#endif  // CAPELLA_ROS_DOCK__HAZARDS_VECTOR_PUBLISHER_HPP_
