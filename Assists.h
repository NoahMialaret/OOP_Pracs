#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple>
#include <random>

class Assists
{
public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight);
    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2);
};

#endif