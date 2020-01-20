#include <iostream>

using namespace std;

int main ()
{
    cout << "Array of integers." << endl;
    cout << "==================" << endl;

    int values[3];

    values[0] = 23;
    values[2] = 25;

    cout << values[0] << endl;
    cout << values[1] << endl; // this will print garbage value since this is not assigned.
    cout << values[2] << endl;
    cout << "Index out of range value : " << values[3] << endl; // C++ does not throw index out of range error it prints some gatbage value

    cout << "Array of doubles." << endl;
    cout << "==================" << endl;

    double numbers[4] = {12.4, 23.21, 7.6743, 54.87};

    for(int i = 0; i < 4; i++)
    {
        cout << "The number at index " << i << " is : " << numbers[i] << endl;
    }

    cout << "Initializing an array with zeroes." << endl;
    cout << "==================================" << endl;

    int numberArray[8] = {};
    for(int i = 0; i < 8; i++)
    {
        cout << "The number at index " << i << " is : " << numberArray[i] << endl;
    }

    cout << "Array of strings." << endl;
    cout << "==================" << endl;

    string fruits[] = { "banana", "apple", "orange", "mango"};

    for(int i = 0; i < 4; i++)
    {
        cout << "The fruit at index " << i << " is : " << fruits[i] << endl;
    }

    return 0;
}