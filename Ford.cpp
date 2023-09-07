#include "Ford.h"

Ford::Ford()
{}

Ford::Ford(int badgeNumber, int price)
    :
    Car(price),
    badgeNumber(badgeNumber)
{}

void Ford::refuel(int litres)
{
    litresOfFuel += litres;

    if (litresOfFuel > 60.0f)
    {
        litresOfFuel = 60.0f;
    }
}

void Ford::drive(int kms)
{
    int kmDriven = 0;

    while (litresOfFuel > 0.0f && kms > 0)
    {
        litresOfFuel -= 0.2;
        kms--;
        kmDriven++;
    }

    if (litresOfFuel < 0.0f)
    {
        litresOfFuel = 0.0f;
    }

    emissions += kmDriven * 234;
}

int Ford::get_badgeNumber() const
{
    return badgeNumber;
}

void Ford::set_badgeNumber(int newNumber)
{
    badgeNumber = newNumber;
}

float Ford::get_litresOfFuel() const
{
    return litresOfFuel;
}

void Ford::set_litresOfFuel(float newFuel)
{
    litresOfFuel = newFuel;

    if (litresOfFuel > 60.0f)
    {
        litresOfFuel = 60.0f;
    }
}
