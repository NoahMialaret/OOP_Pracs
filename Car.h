#ifndef CAR_H
#define CAR_H

class Car
{
public:
    Car();
    Car(int price);

    virtual void drive(int kms);

    int get_price() const;
    void set_price(int newPrice);
    int get_emissions() const;
    void set_emissions(int newEmission);
protected:
    int price = 0;
    int emissions = 0;
};

#endif