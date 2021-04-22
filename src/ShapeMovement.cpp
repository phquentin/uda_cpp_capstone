#include "ros/ros.h"

#include "ShapeMovement.h"

SpiralNode::SpiralNode(int hz, int queue) : MovementNode(hz,queue){

    _vel.linear.x = 1;
    _vel.linear.y = 0;
    _vel.linear.z = 0;

    _vel.angular.x = 0;
    _vel.angular.y = 0;
    _vel.angular.z = 2;

};

void SpiralNode::publish_move()
{
    _vel.linear.x = _vel.linear.x + 0.01;
    
    _pub.publish(_vel);
    _loop_rate.sleep();
}

SquareNode::SquareNode(int hz, int queue) : MovementNode(hz,queue){
    _ts_count = 0;

    _vel.linear.x = 0;
    _vel.linear.y = 0;
    _vel.linear.z = 0;

    _vel.angular.x = 0;
    _vel.angular.y = 0;
    _vel.angular.z = 0;
};

void SquareNode::publish_move()
{
    if(_ts_count == 4)
    {
        _ts_count = 0;
    }

    if(_ts_count == 0)
    {
        _vel.linear.x = 1;
    }
    if(_ts_count == 1)
    {
        _vel.linear.y = 1;
    }
    if(_ts_count == 2)
    {
        _vel.linear.x = -1;
    }
    if(_ts_count == 3)
    {
        _vel.linear.y = -1;
    }
   
    _pub.publish(_vel);

    _vel.linear.x = 0;
    _vel.linear.y = 0;
    _vel.linear.z = 0;
    _ts_count++;

    _loop_rate.sleep();
}
