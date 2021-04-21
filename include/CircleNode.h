#ifndef CIRCLENODE_H
#define CIRCLENODE_H

#include "MovementNode.h"


class CircleNode : public MovementNode
{
public:
    CircleNode (int hz, int queue);
    void publish();
};

#endif
