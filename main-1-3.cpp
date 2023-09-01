#include <iostream>

#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main()
{
    ParkingLot pl(10);

    Vehicle* vh;

    int count = 0;

    while (count < 10)
    {
        char type;

        std::cout << "Park what (" << count + 1 << "/10)? (c)ar, (b)us, (m)otorbike: ";
        std::cin >> type;

        switch (type)
        {
        case 'b':
            vh = new Bus(count);
            count++;
            break;
        case 'c':
            vh = new Car(count);
            count++;
            break;
        case 'm':
            vh = new Motorbike(count);
            count++;
            break;
        default:
            std::cout << "Invalid, try again." << std::endl;
            continue;
        }

        pl.parkVehicle(vh);
    }

    std::cout << "The number of overstaying cars (15s) is: " << pl.countOverstayingVehicles(15) << std::endl;

    return 0;
}