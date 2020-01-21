#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat ()
{
    cout << "Cat created." << endl;
    happy = true;
}

void Cat::speak()
{
    if(happy)
    {
        cout << "Meeoowwwwww!!!!" << endl;
    }
    else
    {
        cout << "gurrrrrrrrrrrrr!!!" << endl;
    }
}

Cat::~Cat ()
{
    cout << "Cat destroyed." << endl;
}