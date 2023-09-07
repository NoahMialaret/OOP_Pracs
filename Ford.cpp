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

    if (litresOfFuel > 600)
    {
        litresOfFuel = 600;
    }
}

void Ford::drive(int kms)
{
    while (litresOfFuel > 0 && kms > 0)
    {
        litresOfFuel -= 2;
        emissions += 234;
        kms--;
    }

    if (litresOfFuel < 0)
    {
        litresOfFuel = 0;
        return;
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
    return (float)litresOfFuel / 10.0f;
}

void Ford::set_litresOfFuel(float newFuel)
{
    litresOfFuel = (int)newFuel * 10;

    if (litresOfFuel > 600)
    {
        litresOfFuel = 600;
    }
}
