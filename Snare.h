#ifndef SNARE_H
#define SNARE_H

#include <tuple>

#include "Influence.h"
#include "Spot.h"

class Snare : public Spot, public Influence
{
public:
    Snare(int x, int y)
        :
        Spot(x, y, 'S')
    {}
    
    bool isOperative() override
    {
        return operative;
    }

    void implement(Spot& spot) override
    {
        spot.setCategory('S');
        operative = false;
    }
private:
    bool operative = true;
};

#endif