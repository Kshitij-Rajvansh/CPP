#include <iostream>

using namespace std;

int main ()
{
    int value1 = 10;

    int &value2 = value1; // references are just alias to the variable

    cout << "Value1: "  << value1 << endl;
    cout << "Value2: "  << value2 << endl;

    value2 = 20;

    cout << "Value1: "  << value1 << endl;
    cout << "Value2: "  << value2 << endl;

    return 0;
}