#include <iostream>

#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main()
{
    ParkingLot pl(10);

    for (int i = 0; i < 10; i++)
    {
        Vehicle* vh;

        switch (i % 3)
        {
        case 0:
            vh = new Bus(i);
            break;
        case 1:
            vh = new Car(i);
            break;
        case 2:
            vh = new Motorbike(i);
            break;
        }

        pl.parkVehicle(vh);

        delete vh;
    }


    pl.unParkVehicle(6);

    return 0;
}