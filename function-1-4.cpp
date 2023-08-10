#include "person.h"

PersonList shallowCopyPersonList(PersonList pl)
{
    PersonList new_pl;

    new_pl.numPeople = pl.numPeople;
    new_pl.people = pl.people;

    return new_pl;
}