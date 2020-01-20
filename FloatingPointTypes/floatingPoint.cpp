#include <iostream>
#include <iomanip> /* Library for input output manipulation */

using namespace std;

int main ()
{
    float fvalue = 63.7;

    cout << "Size of float: " << sizeof(float) << endl;
    cout << setprecision(15) << fixed << fvalue << endl;

    double dValue = 34.5;
    cout << setprecision(15) << fixed << dValue << endl;

    long double lValue = 34.564528264728469001;
    cout << setprecision(35) << fixed << lValue << endl;

    return 0;
}