#include <iostream>

#include "Car.h"
#include "Tesla.h"

int main()
{
    Tesla tl = Tesla('m', 1000);

    for (int i = 0; i < 3; i++)
    {
        tl.drive(200);

        std::cout << "emissions: " << tl.get_emissions() << std::endl;

        std::cout << "percent: " << tl.get_batteryPercentage() << std::endl;
    }

    return 0;
}