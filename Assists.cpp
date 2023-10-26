#include "Assists.h"

std::tuple<int, int> Assists::createRandomLoc(int matrixWidth, int matrixHeight)
{
    std::random_device rd;
    std::mt19937 rng(rd());

    std::uniform_int_distribution<int> xDist(0, matrixWidth - 1);
    std::uniform_int_distribution<int> yDist(0, matrixHeight - 1);
    return std::tuple<int, int>(xDist(rng), yDist(rng));
}

double Assists::evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2)
{
    return sqrt(pow(std::get<0>(loc1) - std::get<0>(loc2), 2) + pow(std::get<1>(loc1) - std::get<1>(loc2), 2));
}
