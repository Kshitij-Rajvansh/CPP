#include <iostream>

using namespace std;

// Function to print menu

void ShowMenu ()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}

// Process function

void Process ()
{
    int input;
    cin >> input;

    switch (input)
    {
        case 1:
            cout << "Searching..." << endl;
            break;
        case 2:
            cout << "Viewing..." << endl;
            break;
        case 3:
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "No such selection..." << endl;
    }
}

// Main function i.e. Entry Point of a program

int main ()
{
    ShowMenu();

    cout << "Enter your selection > " << flush;

    Process();

    return 0;
}