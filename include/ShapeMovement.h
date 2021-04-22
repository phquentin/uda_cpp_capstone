#ifndef CIRCLENODE_H
#define CIRCLENODE_H

#include "MovementNode.h"


class SpiralNode : public MovementNode
{
public:
    SpiralNode (int hz, int queue);
    void publish_move();
};

class SquareNode : public MovementNode
{
public:
    SquareNode (int hz, int queue);
    void publish_move();

private:
    int _ts_count;
};

#endif
