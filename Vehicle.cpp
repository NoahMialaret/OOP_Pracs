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


Car::Car(int ID)
    :
    Vehicle(ID)
{}

int Car::getParkingDuration() const
{
    return (int)((float)(std::time(nullptr) - timeOfEntry) * 0.9);
}


Bus::Bus(int ID)
    :
    Vehicle(ID)
{}

int Bus::getParkingDuration() const
{
    return (int)((float)(std::time(nullptr) - timeOfEntry) * 0.75);
}


Motorbike::Motorbike(int ID)
    :
    Vehicle(ID)
{}

int Motorbike::getParkingDuration() const
{
    return (int)((float)(std::time(nullptr) - timeOfEntry) * 0.85);
}
