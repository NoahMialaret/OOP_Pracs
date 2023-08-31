#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxVehicles)
    :
    maxVehicles(maxVehicles)
{
    vehicles = new Vehicle*[maxVehicles];
}

int ParkingLot::getCount() const
{
    return curNum;
}

void ParkingLot::parkVehicle(Vehicle *vehicle)
{
    if (curNum >= maxVehicles)
    {
        std::cout << "The lot is full" << std::endl;
        return;
    }

    *vehicles[curNum] = *vehicle;

    curNum++;
}

void ParkingLot::unParkVehicle(int ID)
{
    bool foundVehicle = false;

    for (int i = 0; i < curNum; i++)
    {
        if (vehicles[i]->getID() == ID)
        {
            delete vehicles[i];
            foundVehicle = true;
        }

        if (foundVehicle && i + 1 < maxVehicles)
        {
            vehicles[i] = vehicles[i + 1];
        }
    }

    if(foundVehicle)
    {
        vehicles[maxVehicles - 1] = nullptr;
    }

    curNum -= (int)foundVehicle;

    if (!foundVehicle)
    {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}
