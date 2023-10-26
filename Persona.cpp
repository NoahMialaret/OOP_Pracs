#include "Persona.h"

Persona::Persona(int x, int y)
    :
    Spot(x, y, 'P')
{}

void Persona::shift(int dx, int dy)
{
    std::get<0>(location) += dx;
    std::get<1>(location) += dy;
}