#ifndef PLAY_H
#define PLAY_H

#include <iostream>
#include <tuple>
#include <vector>

#include "Assists.h"
#include "Influence.h"
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"

class Play
{
public:
    Play() = default;
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
    void playCycle(int maxCycles, double snareTriggerDistance);
    std::vector<Spot*>& getMatrix();
private:
    std::vector<Spot*> matrix;
    int boardWidth = 0;
};

#endif