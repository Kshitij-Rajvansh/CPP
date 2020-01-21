#include <iostream>
#include "Person.h"

using namespace std;

int main ()
{
    Person person;
    person.setName("Rajvansh");

    cout << person.getDetails() << endl;

    return 0;
}