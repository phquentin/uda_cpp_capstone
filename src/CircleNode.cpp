//#include "ros/ros.h"

#include "CircleNode.h"


CircleNode::CircleNode(int hz, int queue) : MovementNode(hz,queue){};

void CircleNode::publish()
{
    _vel.linear.x = 1;
    _vel.linear.y = 0;
    _vel.linear.z = 0;

    _vel.angular.x = 0;
    _vel.angular.y = 0;
    _vel.angular.z = 2;
    
    _pub.publish(_vel);

    _loop_rate.sleep();

}
