#include <iostream>
#include "arithmeticFun.h"

using namespace std;

void PrintMenu ()
{
    cout << "Select from the below options : " << endl;
    cout << "================================" << endl;

    cout << "\t 1. Convert seconds to minutes" << endl;
    cout << "\t 2. Convert hours to minutes" << endl;
    cout << "\t 3. Convert hours to seconds" << endl;
    cout << "\t 4. Convert seconds to days" << endl;

    cout << "================================" << endl;
}

int AskInput ()
{
    cout << "Please enter your selection > " << flush;

    int input = 0;
    cin >> input;

    return input;
}

int main ()
{
    PrintMenu();

    int input = AskInput();

    switch (input)
    {
        case 1:
            {
                cout << "Enter seconds > " << flush;

                double seconds = 0;
                cin >> seconds;

                cout << "Minutes = " << getMinutesFromSeconds(seconds) << endl;
            }
            break;
        case 2:
            {
                cout << "Enter hours > " << flush;

                double hours = 0;
                cin >> hours;

                cout << "Minutes = " << getMinutesFromHours(hours) << endl;
            }
            break;
        case 3:
            {
                cout << "Enter hours > " << flush;

                double hours = 0;
                cin >> hours;

                cout << "Seconds = " << getSecondsFromHours(hours) << endl;
            }
            break;
        case 4:
            {
                cout << "Enter seconds > " << flush;

                double seconds = 0;
                cin >> seconds;

                cout << "Days = " << getDaysFromSeconds(seconds) << endl;
            }
            break;
        
        default:
            cout << "Entered selection is not valid." << endl;
            break;
    }

    return 0;
}