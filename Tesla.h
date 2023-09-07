#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car
{
public:
    Tesla();
    Tesla(char model, int price);

    void chargeBattery(int mins);
    void drive(int kms) override;

    char get_model() const;
    void set_model(char newModel);
    float get_batteryPercentage() const;
    void set_batteryPercentage(float newPercent);
private:
    char model;
    float batteryPercentage = 100.0f;
};

#endif