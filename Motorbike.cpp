#include "Motorbike.h"

Motorbike::Motorbike(int ID)
    :
    Vehicle(ID)
{}

int Motorbike::getParkingDuration() const
{
    return (int)((float)(std::time(nullptr) - timeOfEntry) * 0.85);
}
