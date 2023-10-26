#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"
#include "Play.h"

int main()
{
    Play play;
    play.initPlay(1, 10, 10, 10);
    play.playCycle(15, 2.0);

    return 0;
}