#include <iostream>

#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main()
{
    int size = 2;

    PersonList pl;

    pl.numPeople = size;
    pl.people = new Person[size];

    pl.people[0].name = "Mark";
    pl.people[0].age = 26;
    pl.people[1].name = "Daisy";
    pl.people[1].age = 47;

    PersonList deep_pl = shallowCopyPersonList(pl);

    //delete[] pl.people;

    std::cout << "The number of people is " << deep_pl.numPeople << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout   << "Name: " << deep_pl.people[i].name << " - Age: " 
                    << deep_pl.people[i].age << std::endl;
    }

    return 0;
}
