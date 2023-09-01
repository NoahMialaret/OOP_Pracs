#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle
{
public:
    Vehicle(int ID);

    int getID() const;
    virtual int getParkingDuration() const;
protected:
    std::time_t timeOfEntry;
    int ID;
};

#endif