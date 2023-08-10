#include "person.h"

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList new_pl;

    new_pl.numPeople = pl.numPeople;


    new_pl.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i++)
    {
        new_pl.people[i].name = pl.people[i].name;
        new_pl.people[i].age  = pl.people[i].age;
    }

    return new_pl;
}