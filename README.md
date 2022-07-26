# 机械臂加激光雷达实现三维环境感知避障

机械臂算法仿真验证平台，moveit可以直接使用。

## 安装

```
mkdir -p robotarm/src
cd robotarm/src
git clone https://github.com/aiotrobot/robotarm-laser.git
cd ..
catkin build or catkin_make
```

## 使用

先启动gazebo仿真，再启动rviz，再启动laser_fusion和octomap_mapping

```shell
source devel/setup.bash
roslaunch ur_gazebo ur5.launch
rosrun laser_fusion laser_fusion_node
roslaunch octomap_server octomap_mapping.launch
```

------

作者：小鱼

欢迎关注微信公众号：鱼香ROS
