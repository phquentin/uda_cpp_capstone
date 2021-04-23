#include <random>
#include "ros/ros.h"

#include "ShapeMovement.h"

std::random_device rd;
std::mt19937 eng(rd());
std::uniform_int_distribution<> distr(-2,2);

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

RandomNode::RandomNode(int hz, int queue) : MovementNode(hz,queue){
    
    _vel.linear.x = 1;
    _vel.linear.y = 0;
    _vel.linear.z = 0;

    _vel.angular.x = 0;
    _vel.angular.y = 0;
    _vel.angular.z = 0;
};

void RandomNode::publish_move()
{   
    _vel.angular.z = distr(eng);
   
    _pub.publish(_vel);

    _loop_rate.sleep();
}
