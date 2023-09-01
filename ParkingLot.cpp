#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxVehicles)
    :
    maxVehicles(maxVehicles)
{
    vehicles = new Vehicle*[maxVehicles];

    for (int i = 0; i < maxVehicles; i++)
    {
        delete vehicles[i];
        vehicles[i] = nullptr;
    }
}

int ParkingLot::getCount() const
{
    return curNum;
}

void ParkingLot::parkVehicle(Vehicle* vehicle)
{
    if (curNum >= maxVehicles)
    {
        std::cout << "The lot is full" << std::endl;
        return;
    }

    for (int i = 0; i < maxVehicles; i++)
    {
        if (vehicles[i] == nullptr)
        {
            vehicles[i] = vehicle;
            break;
        }
    }

    curNum++;
}

void ParkingLot::unparkVehicle(int ID)
{
    bool foundVehicle = false;

    for (int i = 0; i < maxVehicles; i++)
    {
        if (vehicles[i]->getID() == ID)
        {
            delete vehicles[i];
            vehicles[i] = nullptr;
            foundVehicle = true;
            break;
        }
    }

    curNum -= (int)foundVehicle;

    if (!foundVehicle)
    {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}

int ParkingLot::countOverstayingVehicles(int threshhold)
{
    int count = 0;

    for (int i = 0; i < maxVehicles; i++)
    {
        count += vehicles[i]->getParkingDuration() > threshhold;
    }

    return count;
}