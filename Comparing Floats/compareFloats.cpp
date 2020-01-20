#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float fvalue = 1.21;

    cout << fixed << fvalue << endl;
    cout << setprecision(8) << fixed << fvalue << endl;

    if(fvalue == 1.21f)
    {
        cout << "Equals" << endl;
    }
    else
    {
        cout << "Not equals" << endl;
    }
    

    return 0;
}