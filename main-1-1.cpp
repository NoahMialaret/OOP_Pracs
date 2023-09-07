#include <iostream>

#include "Car.h"

int main()
{
    Car car = Car(1000);

    car.drive(200);

    std::cout << "emissions: " << car.get_emissions() << std::endl;

    return 0;
}