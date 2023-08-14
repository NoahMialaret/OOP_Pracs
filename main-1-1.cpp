#include <iostream>

#include "Person.h"

extern Person* createPersonArray(int);

int main()
{
    int size = 10;

    Person* people = createPersonArray(size);

    for (int i = 0; i < size; i++)
    {
        std::cout   << "Name: " << people[i].name << " - Age: " 
                    << people[i].age << std::endl;
    }

    return 0;
}
