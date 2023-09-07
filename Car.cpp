#include "Car.h"

Car::Car()
{}

Car::Car(int price)
    :
    price(price)
{}

void Car::drive(int kms)
{
    emissions += 20 * kms;
}

int Car::get_price() const
{
    return price;
}

void Car::set_price(int newPrice)
{
    price = newPrice;
}

int Car::get_emissions() const
{
    return emissions;
}

void Car::set_emissions(int newEmission)
{
    emissions = newEmission;
}
