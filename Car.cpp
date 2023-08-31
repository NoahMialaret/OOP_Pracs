#include "Car.h"

Car::Car(int ID)
    :
    Vehicle(ID)
{}

int Car::getParkingDuration() const
{
    return (int)((float)(std::time(nullptr) - timeOfEntry) * 0.9);
}
