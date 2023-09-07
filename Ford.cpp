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
    while (litresOfFuel > 0.0f && kms > 0)
    {
        litresOfFuel -= 0.2;
        emissions += 234;
        kms--;
    }

    if (litresOfFuel < 0.0f)
    {
        litresOfFuel = 0.0f;
    }
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
