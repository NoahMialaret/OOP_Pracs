#ifndef PERSONA_H
#define PERSONA_H

#include <tuple>

#include "Spot.h"

class Persona : public Spot
{
public:
    Persona(int x, int y)
        :
        Spot(x, y, 'P')
    {}
    void shift(int dx, int dy)
    {
        std::get<0>(location) += dx;
        std::get<1>(location) += dy;
    }
};

#endif