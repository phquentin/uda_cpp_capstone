#ifndef CIRCLENODE_H
#define CIRCLENODE_H

#include "MovementNode.h"


class SpiralNode : public MovementNode
{
public:
    SpiralNode (int hz, int queue);
    void publish_move();
};

class RandomNode : public MovementNode
{
public:
    RandomNode (int hz, int queue);
    void publish_move();

};

#endif
