#include <iostream>
#include "Person.h"

using namespace std;

int main ()
{
    Person person;

    Person person1("Kshitij");

    Person person2("Nikhil", 23);

    cout << person.toString() << endl;
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;

    return 0;
}