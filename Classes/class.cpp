#include <iostream>
#include "Cat.h"

using namespace std;

int main ()
{
    Cat cat;

    cat.jump();
    cat.speak();

    cout << sizeof(cat) << endl;

    return 0;
}