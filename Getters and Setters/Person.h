#ifndef Person_h_
#define Person_h_

#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
    public:
        Person();
        string getDetails();
        void setName (string newName);
        string getName();
};

#endif
