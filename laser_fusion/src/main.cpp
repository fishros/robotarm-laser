/*
 * @Descripttion: 
 * @Author: sangxin
 * @Date: 2021-07-03 13:25:35
 * @LastEditTime: 2021-07-04 14:03:51
 */
#include <ros/ros.h>
#include "laser_fusion/Laser2Cloud.h"
#include <sensor_msgs/PointCloud.h>
 
int main(int argc, char** argv){
  ros::init(argc, argv, "point_cloud_publisher1");
  My_Filter filter;
  ros::spin();
 
}