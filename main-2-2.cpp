#include <iostream>

#include "Car.h"
#include "Ford.h"

int main()
{
    Ford fr = Ford('m', 1000);

    for (int i = 0; i < 3; i++)
    {
        fr.drive(151);

        std::cout << "Emissions: " << fr.get_emissions() << std::endl;

        std::cout << "Litres: " << fr.get_litresOfFuel() << std::endl;
    }

    return 0;
}