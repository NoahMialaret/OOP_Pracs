#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <ctime>
#include <iostream>

#include "Vehicle.h"

class ParkingLot
{
public:
    ParkingLot(int maxVehicles);

    int getCount() const;

    void parkVehicle(Vehicle* vehicle);
    void unParkVehicle(int ID);
    
private:
    Vehicle** vehicles = nullptr;

    int maxVehicles = 0;
    int curNum = 0;
};

#endif