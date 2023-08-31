#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main()
{
    Vehicle* car = new Car(1);
    Vehicle* bus = new Bus(2);
    Vehicle* motor = new Motorbike(3);

    std::cout << motor->getID() << " has parked for " << motor->getParkingDuration() << std::endl;

    return 0;
}