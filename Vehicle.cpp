#include "Vehicle.h"

Vehicle::Vehicle(int ID)
    :
    ID(ID),
    timeOfEntry(std::time(nullptr))
{}

int Vehicle::getID() const
{
    return ID;
}

int Vehicle::getParkingDuration() const
{
    return -1;
}