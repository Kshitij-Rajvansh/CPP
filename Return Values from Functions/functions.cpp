#include <iostream>

using namespace std;

// Function Prototyping
void Process (int number); // this is a function prototype actual implementation is below


// Main function i.e. Entry Point of a program

int main ()
{
    int input = 10;
    
    Process(input);

    return 0;
}

void Process (int number) // Actual implementation of prototype function
{
    cout << number << endl;
}