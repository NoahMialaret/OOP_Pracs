#include <iostream>

#include "Person.h"

PersonList createPersonList(int);

int main()
{
    int size = 10;

    PersonList pl = createPersonList(size);

    std::cout << "The number of people is " << pl.numPeople << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout   << "Name: " << pl.people[i].name << " - Age: " 
                    << pl.people[i].age << std::endl;
    }

    return 0;
}
