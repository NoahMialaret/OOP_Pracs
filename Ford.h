#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car
{
public:
    Ford();
    Ford(int badgeNumber, int price);

    void refuel(int litres);
    void drive(int kms) override;

    int get_badgeNumber() const;
    void set_badgeNumber(int newNumber);
    float get_litresOfFuel() const;
    void set_litresOfFuel(float newFuel);
private:
    int badgeNumber;
    float litresOfFuel = 60.0f;
};

#endif