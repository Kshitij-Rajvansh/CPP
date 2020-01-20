#include <iostream>

using namespace std;

int main ()
{
    /* int i = 0;

    while(i < 5)
    {
        cout << "C++ is fun..." << endl;
        i += 1;
    }

    cout << "Program qutting..." << flush;

    return 0;
    */

    const string password = "password";
    cout << "Enter your password > " << flush;

    string input;
    cin >> input;

    while(input != password)
    {
        cout << "Enter your password > " << flush;

        cin >> input;
    }

    cout << "Password accepted..." << endl;

    return 0;

}