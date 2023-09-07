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
    batteryPercentage += 0.5 * float(mins);
    
    if(batteryPercentage > 100.0f)
    {
        batteryPercentage = 100.0f;
    }
}

void Tesla::drive(int kms)
{
    int kmDriven = 0;

    while (batteryPercentage > 0.0f && kms > 0)
    {
        batteryPercentage -= 0.2;
        kms--;
        kmDriven++;
    }

    if (batteryPercentage < 0.0f)
    {
        batteryPercentage = 0.0f;
    }

    emissions += kmDriven * 74;
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
    return batteryPercentage;
}

void Tesla::set_batteryPercentage(float newPercent) 
{
    batteryPercentage = newPercent;

    if (batteryPercentage < 0.0f)
    {
        batteryPercentage = 0.0f;
    }
    else if (batteryPercentage > 100.0f)
    {
        batteryPercentage = 100.0f;
    }
}
