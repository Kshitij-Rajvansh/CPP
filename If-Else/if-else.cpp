#include <iostream>

using namespace std;

int main () 
{
    cout << "1. \tAdd a new record." << endl;
    cout << "2. \tDelete a record." << endl;
    cout << "3. \tView a record." << endl;
    cout << "4. \tSearch a record." << endl;
    cout << "5. \tQuit." << endl;

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value;

    if(value < 1 || value > 5)
    {
        cout << "Insufficient privilage." << endl;
    }
    else if(value == 5)
    {
        cout << "Application quitting..." << endl;
    }
    else if(value == 4)
    {
        cout << "Searching a record..." << endl;
    }
    else if(value == 3)
    {
        cout << "Viewing a record..." << endl;
    }
    else if(value == 2)
    {
        cout << "Deleting a record..." << endl;
    }
    else if(value == 1)
    {
        cout << "Adding a record" << endl;
    }

    return 0;
}