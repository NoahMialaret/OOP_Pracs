#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Spot.h"

int main()
{
    std::tuple<int, int> rand = Assists::createRandomLoc(10, 10);
    Spot spot(std::get<0>(rand), std::get<1>(rand), 'S');

    std::cout   << "Pos: " << std::get<0>(spot.getLoc()) << " - "
                << std::get<1>(spot.getLoc()) << std::endl;

    return 0;
}