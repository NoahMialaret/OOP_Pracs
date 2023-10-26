#ifndef INFLUENCE_H
#define INFLUENCE_H

#include "Spot.h"

class Influence
{
public:
    //Influence();
    virtual void implement(Spot& spot) = 0;
};

#endif