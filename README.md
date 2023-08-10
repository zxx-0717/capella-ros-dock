# 自动充电package

一、目录结构

1、capella_ros_dock_msgs定义消息类型

2、capella_ros_dock 源码(extend子目录未使用)

二、主要文件功能

1、utils 定义params结构体

2、test_dock 自动测试程序

3、behaviors_scheduler: 定义schedular接口

4、motion_control_node: 根据不同的schedular执行相应的任务

5、simple_goal_controller: 执行机器人导航到固定的goal队列

6、camera_point_cloud_process: 处理相机深度点云数据

7、hazards_vector_publisher: 汇总hazards信息并发布

8、docking_behavior: dock action server

9、test_dock_launch.py: 自动测试launch 文件

10、config.yaml: 参数文件

三、核心执行流程：

dock action server 收到 goal请求时，初始化simple_goal_controller对象，设置behaviors_scheduler对象data。随即motion_control node检测到behaviors_scheduler has behavior，执行run behavior，调用simple_goal_controller生成cmd_vel topic。 

四、simple_goal_controller 执行逻辑：

通过NavigateStates控制不同阶段执行不同的动作。

LOOKUP_ARUCO_MARKER

ANGLE_TO_BUFFER_POINT

MOVE_TO_BUFFER_POINT

ANGLE_TO_X_POSITIVE_ORIENTATION

ANGLE_TO_GOAL_POSITION

GO_TO_GOAL_POSITION

GOAL_ANGLE

状态名称的字面含义就是当前状态下机器人要完成的动作

额外增加了机器人在特定条件下未检测到marker或者相机前方有障碍物时的停止动作。

 