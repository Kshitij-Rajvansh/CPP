#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person ()
{
    name = "";
    age = 0;
}

Person::Person (string name): name(name), age(0)
{

}

Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;

    cout << "memory location : " << this << endl;
}

string Person::toString ()
{
    stringstream ss;

    ss << "Name is : ";
    ss << name;
    ss << "; Age is : ";
    ss << age;

    return ss.str();
}