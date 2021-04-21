#include <iostream>

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"


#include "CircleNode.h"
//class CircleNode;



int main(int argc, char **argv)
{

  ros::init(argc, argv, "move");

  int count = 0;

  int x;
  std::cout << "Type a number: "; // Type a number and press enter
  std::cin >> x; // Get user input from the keyboard
  std::cout << "Your number is: " << x;

  CircleNode circle_node(10,1000);
 
  while (ros::ok())
  {
    circle_node.publish();
    ROS_INFO("%i", count);
    count = count +1;
    ros::spinOnce();
  }

  return 0;
}
