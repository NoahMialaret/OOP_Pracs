#ifndef FLEET_H
#define FLEET_H

#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

class Fleet
{
public:
    Fleet();

    Car** get_fleet();
protected:
    Car** fleet = nullptr;
};

#endif