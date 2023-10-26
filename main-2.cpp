#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"

int main()
{
    // std::tuple<int, int> rand = Assists::createRandomLoc(10, 10);
    // Persona pers(std::get<0>(rand), std::get<1>(rand));

    // std::cout   << "Persona Pos: " << std::get<0>(pers.getLoc()) << " - "
    //             << std::get<1>(pers.getLoc()) << std::endl;

    // pers.shift(3, 10);

    // std::cout   << "Persona NewPos: " << std::get<0>(pers.getLoc()) << " - "
    //             << std::get<1>(pers.getLoc()) << std::endl;

    // rand = Assists::createRandomLoc(10, 10);
    // Snare snare(std::get<0>(rand), std::get<1>(rand));

    // std::cout   << "Snare Pos: " << std::get<0>(snare.getLoc()) << " - "
    //             << std::get<1>(snare.getLoc()) << std::endl;

    // std::cout << "Persona category: " << pers.getCategory() << std::endl;

    // snare.implement(pers);

    // std::cout << "Persona category: " << pers.getCategory() << std::endl;

    return 0;
}