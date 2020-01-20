#include <iostream>

using namespace std;

int main ()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << " * " << flush;
        }
        cout << endl;
    }

    cout << "\n==============" << endl;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 5; j > 0; j--)
        {
            if(j == i+1)
            {
                for(int k = 0; k < i+1; k++)
                {
                    cout << " * " << flush;
                }
            }
            else
            {
                cout << "   " << flush;
            }
            
        }
        cout << endl;
    }

    return 0;
}