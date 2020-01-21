#include <iostream>
#include "Person.h"

using namespace std;

Person::Person ()
{
    name = "Kshitij";
}

string Person::getDetails ()
{
    return name;
}

void Person::setName (string newName)
{
    name = newName;
}

string Person::getName ()
{
    return name;
}