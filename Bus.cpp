#include "Bus.h"

Bus::Bus(int ID)
    :
    Vehicle(ID)
{}

int Bus::getParkingDuration() const
{
    return (int)((float)(std::time(nullptr) - timeOfEntry) * 0.75);
}
