#include <iostream>

#include "Car.h"
#include "Ford.h"
#include "Fleet.h"
#include "Tesla.h"

int main()
{
    Fleet ft;

    Car** fleet = ft.get_fleet();

    for(int i = 0; i < 5; i++)
    {
        fleet[i]->drive(200);
        std::cout << "Car drove 200 kms!" << std::endl;
        std::cout << "Price: " << fleet[i]->get_price() << " & Emissions: " << fleet[i]->get_emissions() <<std::endl;
    }

    return 0;
}