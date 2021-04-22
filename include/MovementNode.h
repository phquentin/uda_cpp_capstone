#ifndef MOVEMENTNODE_H
#define MOVEMENTNODE_H

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"



class MovementNode
{
public:
    MovementNode(int hz, int queue_size);
    virtual void publish_move(){};
protected:
    ros::NodeHandle _n;
    ros::Publisher _pub;
    ros::Rate _loop_rate;

    geometry_msgs::Twist _vel;
};

#endif
