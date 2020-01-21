#include <iostream>
#include "Cat.h"

using namespace std;

int main ()
{
    Cat myCat;

    cout << "Is your cat happy ? > " << flush;

    string ishappy = "false";
    cin >> ishappy;

    if(ishappy == "true" || ishappy == "TRUE" || ishappy == "yes" || ishappy == "YES")
    {
        myCat.makeHappy();
    }
    else
    {
        myCat.makeSad();
    }
    
    
    myCat.speak();

    return 0;
}