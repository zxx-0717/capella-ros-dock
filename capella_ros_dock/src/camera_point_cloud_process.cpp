#include "capella_ros_dock/camera_point_cloud_process.hpp"

#include <algorithm>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "rclcpp_components/register_node_macro.hpp"

using std::placeholders::_1;

namespace capella_ros_dock {

CameraPointCloudProcess::CameraPointCloudProcess(const rclcpp::NodeOptions & options)
	: rclcpp::Node("camera_point_cloud_process", options)
{
	RCLCPP_INFO(this->get_logger(), "camera point cloud process node started.");

	init_params();
	this->last_pub_time = this->now();

	// create subscription to point_cloud topic
	cb_group_point_cloud_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
	auto point_cloud_sub_options = rclcpp::SubscriptionOptions();
	point_cloud_sub_options.callback_group = cb_group_point_cloud_;
	// auto qos = rclcpp::QoS(1).best_effort();
	auto qos = rclcpp::SensorDataQoS();
	point_cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(topic_point_cloud, qos, std::bind(&CameraPointCloudProcess::point_cloud_sub_callback, this, _1), point_cloud_sub_options);

	// create publisher for hazard
	hazard_pub_ = this->create_publisher<capella_ros_dock_msgs::msg::HazardDetection>("object_proximity", rclcpp::QoS(10).best_effort());


}

CameraPointCloudProcess::~CameraPointCloudProcess()
{
	delete ob_range;
}

void CameraPointCloudProcess::init_params()
{
	this->declare_parameter<std::string>("topic_name", "/camera/depth/points");
	this->declare_parameter<int>("pub_frequency", 5);
	this->declare_parameter<float>("obstacle_x_min", -0.2);
	this->declare_parameter<float>("obstacle_x_max", 0.2);
	this->declare_parameter<float>("obstacle_y_min", -0.8);
	this->declare_parameter<float>("obstacle_y_max", 0.3);
	this->declare_parameter<float>("obstacle_z_min", 0.26);
	this->declare_parameter<float>("obstacle_z_max", 0.5);

	this->topic_point_cloud = this->get_parameter_or<std::string>("topic_name", "/camera/depth/points");
	int pub_frequency = this->get_parameter_or<int>("pub_frequency", 5);
	// RCLCPP_INFO(this->get_logger(), "frequency: %d", pub_frequency);
	this->time_pub_interval = 1.0 / pub_frequency;
	this->ob_range = new obstacle_range();
	this->ob_range->x_min = this->get_parameter_or<float>("obstacle_x_min", -0.2);
	this->ob_range->x_max = this->get_parameter_or<float>("obstacle_x_max", 0.2);
	this->ob_range->y_min = this->get_parameter_or<float>("obstacle_y_min", -0.8);
	this->ob_range->y_max = this->get_parameter_or<float>("obstacle_y_max", 0.3);
	this->ob_range->z_min = this->get_parameter_or<float>("obstacle_z_min", 0.26);
	this->ob_range->z_max = this->get_parameter_or<float>("obstacle_z_max", 0.5);
}

void CameraPointCloudProcess::point_cloud_sub_callback(sensor_msgs::msg::PointCloud2::SharedPtr msg)
{
	this->has_obstacle = false;
	if (!camera_params_updated)
	{
		frame_width = msg->width;
		frame_height = msg->height;
		is_bigendian = msg->is_bigendian;
		data_count = msg->row_step * frame_height;
		uchar_data_ptr = new unsigned char[data_count];

		camera_params_updated = true;
	}

	point_cloud_data = msg->data;
	for(int count_index = 0; count_index < data_count; count_index++)
	{
		uchar_data_ptr[count_index] = point_cloud_data[count_index];
	}
	cv::Mat tmp = cv::Mat(frame_height, frame_width, CV_32FC4, uchar_data_ptr);
	mat_point_cloud_xyz = cv::Mat(frame_height, frame_width, CV_32FC3);
	for (int row = 0; row < frame_height; row++)
	{
		for (int col = 0; col < frame_width; col++)
		{
			mat_point_cloud_xyz.at<cv::Vec3f>(row, col)[0] = tmp.at<cv::Vec4f>(row, col)[0];
			mat_point_cloud_xyz.at<cv::Vec3f>(row, col)[1] = tmp.at<cv::Vec4f>(row, col)[1];
			mat_point_cloud_xyz.at<cv::Vec3f>(row, col)[2] = tmp.at<cv::Vec4f>(row, col)[2];
		}
	}

	cv::Point3f point3f;
	img_depth_points = cv::Mat::zeros(frame_height, frame_width, CV_8UC3);
	int obstacle_count = 0;

	for (int row = 0; row < frame_height; row++)
	{
		for (int col = 0; col < frame_width; col++)
		{
			point3f = mat_point_cloud_xyz.at<cv::Vec3f>(row, col);
			// RCLCPP_INFO_STREAM(this->get_logger(), "(" << row << ", " << col << ")" << point3f);
			if(point3f.x == point3f.x && point3f.y == point3f.y && point3f.z == point3f.z)
			{
				if (in_range(point3f))
				{
					img_depth_points.at<cv::Vec3b>(row, col)[0] = 0;
					img_depth_points.at<cv::Vec3b>(row, col)[1] = 0;
					img_depth_points.at<cv::Vec3b>(row, col)[2] = 255;
					obstacle_count++;
					has_obstacle = true;
				}
				else
				{
					img_depth_points.at<cv::Vec3b>(row, col)[0] = 0;
					img_depth_points.at<cv::Vec3b>(row, col)[1] = 255;
					img_depth_points.at<cv::Vec3b>(row, col)[2] = 0;
				}
			}
			else
			{
				img_depth_points.at<cv::Vec3b>(row, col)[0] = 255;
				img_depth_points.at<cv::Vec3b>(row, col)[1] = 0;
				img_depth_points.at<cv::Vec3b>(row, col)[2] = 0;
			}
		} // end cols
	} // end rows
	  // RCLCPP_INFO(this->get_logger(), "obstacle_count: %d", obstacle_count);
	  // RCLCPP_INFO_STREAM(this->get_logger(), "" << mat_point_cloud_xyz.at<cv::Vec3f>(240, 320));

	this->now_time = this->get_clock()->now();
	double time_elapse;
	time_elapse = now_time.seconds() - last_pub_time.seconds();

	if (time_elapse > this->time_pub_interval && has_obstacle)
	{
		auto hazard_msg = capella_ros_dock_msgs::msg::HazardDetection();
		hazard_msg.header = msg->header;
		hazard_msg.type = capella_ros_dock_msgs::msg::HazardDetection::OBJECT_PROXIMITY;
		hazard_pub_->publish(hazard_msg);
		last_pub_time = now_time;
	}

	cv::imshow("img_depth_points", img_depth_points);

	cv::waitKey(10);

	// RCLCPP_INFO(this->get_logger(), "time_end: %f s.", this->get_clock()->now().seconds());
}

bool CameraPointCloudProcess::in_range(const cv::Point3f& point3f)
{
	bool ret = false;
	float x = point3f.x;
	float y = point3f.y;
	float z = point3f.z;
	if (x > ob_range->x_min && x < ob_range->x_max &&
	    y > ob_range->y_min && y < ob_range->y_max &&
	    z > ob_range->z_min && z < ob_range->z_max)
	{
		ret = true;
	}

	return ret;
}

} // namespace capella_ros_dock

RCLCPP_COMPONENTS_REGISTER_NODE(capella_ros_dock::CameraPointCloudProcess)
