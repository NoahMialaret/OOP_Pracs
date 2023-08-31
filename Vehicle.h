#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle
{
public:
    Vehicle(int ID);

    int getID() const;
    virtual int getParkingDuration() const = 0;
protected:
    std::time_t timeOfEntry;
    int ID;
};

class Car : public Vehicle
{
public:
    Car(int ID);
    int getParkingDuration() const;

};

class Bus : public Vehicle
{
public:
    Bus(int ID);
    int getParkingDuration() const;

};

class Motorbike : public Vehicle
{
public:
    Motorbike(int ID);
    int getParkingDuration() const;

};

#endif