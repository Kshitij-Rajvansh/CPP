#include <iostream>

using namespace std;

int main ()
{
    /*
        Break Statement
    */
    for(int i = 0; i < 6; i++)
    {
        cout << "i is = " << i << endl;

        if( i == 4)
        {
            break;
        }

        cout << "Still looping..." << endl;
    }

    cout << "Loop breaked..." << endl;

    /*
        Continue Statement
    */
    for(int i = 0; i < 6; i++)
    {
        cout << "i is = " << i << endl;

        if( i == 4)
        {
            continue;
        }

        cout << "Still looping..." << endl;
    }

    cout << "Loop breaked..." << endl;

    return 0;
}