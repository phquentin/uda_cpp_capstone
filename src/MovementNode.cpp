#include "MovementNode.h"


MovementNode::MovementNode(int hz, int queue_size) : _loop_rate(hz) 
    {
    _pub = _n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", queue_size);
    }
