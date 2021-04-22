#include <iostream>

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include "ShapeMovement.h"

int main(int argc, char **argv)
{

  ros::init(argc, argv, "move");

  int x;
  std::cout << "If you insert 1 the turtle will do a square movement. If you insert 2 the turtle will do a spiral movement. \n"; // Type a number and press enter
  std::cin >> x; // Get user input from the keyboard
  std::cout << "Your selection is: " << x;

  if(x == 1)
  {
    SquareNode move_node(1,1000);
    std::cout << "Your selection is a square";

    while (ros::ok())
    {
      move_node.publish_move();
      ros::spinOnce();
    }
  }
  else if (x == 2)
  {
    SpiralNode move_node(10,1000);
    std::cout << "Your selection is a spiral";

    while (ros::ok())
    {
      move_node.publish_move();
      ros::spinOnce();
    }
  }

  

  return 0;
}
