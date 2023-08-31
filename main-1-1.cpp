#include <iostream>

#include "vehicle.h"

int main()
{
    Vehicle* car = new Car(1);
    Vehicle* bus = new Bus(2);
    Vehicle* motor = new Motorbike(3);

    std::cout << motor->getID() << " has parked for " << motor->GetParkingDuration() << std::endl;

    return 0;
}