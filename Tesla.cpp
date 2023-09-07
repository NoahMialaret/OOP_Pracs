#include "Tesla.h"

Tesla::Tesla()
{}

Tesla::Tesla(char model, int price)
    :
    Car(price),
    model(model)
{}

void Tesla::chargeBattery(int mins)
{
    batteryPercentage += 5 * mins;
    
    if(batteryPercentage > 1000)
    {
        batteryPercentage = 1000;
    }
}

void Tesla::drive(int kms)
{
    while (batteryPercentage > 0 && kms > 0)
    {
        batteryPercentage -= 2;

        emissions += 74;   
        kms--;
    }

    if (batteryPercentage < 0)
    {
        batteryPercentage = 0;
        return;
    }
}

char Tesla::get_model() const
{
    return model;
}

void Tesla::set_model(char newModel) 
{
    model = newModel;
}

float Tesla::get_batteryPercentage() const
{
    return (float)batteryPercentage / 10.0f;
}

void Tesla::set_batteryPercentage(float newPercent) 
{
    batteryPercentage = (int)newPercent * 10;

    if (batteryPercentage < 0)
    {
        batteryPercentage = 0;
    }
    else if (batteryPercentage > 1000)
    {
        batteryPercentage = 1000;
    }
}
