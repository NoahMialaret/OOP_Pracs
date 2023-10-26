#include "Snare.h"

Snare::Snare(int x, int y)
    :
    Spot(x, y, 'S')
{}

bool Snare::isOperative()
{
    return operative;
}

void Snare::implement(Spot &spot)
{
    spot.setCategory('S');
    operative = false;
}
