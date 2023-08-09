
#ifndef CAPELLA_ROS_DOCK__CAMERA_POINT_CLOUD_PROCESS_HPP_
#define CAPELLA_ROS_DOCK__CAMERA_POINT_CLOUD_PROCESS_HPP_

#include "rclcpp/rclcpp.hpp"

#include "sensor_msgs/msg/point_cloud2.hpp"
#include "capella_ros_dock_msgs/msg/hazard_detection.hpp"
#include "opencv2/opencv.hpp"
#include <vector>

#include "image_transport/image_transport.hpp"

namespace capella_ros_dock
{

struct obstacle_range
{
        float x_min;
        float x_max;
        float y_min;
        float y_max;
        float z_min;
        float z_max;
};

class CameraPointCloudProcess : public rclcpp::Node
{
public:
explicit CameraPointCloudProcess(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
~CameraPointCloudProcess();

void init_params();
void point_cloud_sub_callback(sensor_msgs::msg::PointCloud2::ConstSharedPtr msg);
bool in_range(const cv::Point3f& point3f);

private:
rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr point_cloud_sub_;
// image_transport::CameraSubscriber point_cloud_sub_;
rclcpp::CallbackGroup::SharedPtr cb_group_point_cloud_;

rclcpp::Publisher<capella_ros_dock_msgs::msg::HazardDetection>::SharedPtr hazard_pub_;

rclcpp::TimerBase::SharedPtr timer_pub_hazard_;
double time_pub_interval;
std::string topic_point_cloud;
bool camera_params_updated {false};
int frame_width;
int frame_height;
bool is_bigendian;
std::vector<unsigned char> point_cloud_data;
rclcpp::Time last_pub_time;
rclcpp::Time now_time;
unsigned char* uchar_data_ptr;
int data_count;
cv::Mat mat_point_cloud_xyz;
bool has_obstacle{false};
cv::Mat img_depth_points;
bool display_img_depth_pc{false};

struct obstacle_range* ob_range;

};


} // namespace capella_ros_dock

#endif // CAPELLA_ROS_DOCK__CAMERA_POINT_CLOUD_PROCESS_HPP_