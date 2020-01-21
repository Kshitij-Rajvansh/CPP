#include <iostream>
#include "Person.h"

using namespace std;

int main ()
{
    Person person;
    Person person1("Bob");
    Person person2("Kshitij", 25);

    cout << person.toString() << endl;
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;

    return 0;
}