#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle
{
public:
    Vehicle(int ID);
    virtual ~Vehicle() = default;

    int getID() const;
    virtual int getParkingDuration() const;
protected:
    int ID;
    std::time_t timeOfEntry;
};

#endif