#include <iostream>

using namespace std;

int main ()
{
    string animals[2][3] = { {"dog","cat","horse"}, {"parrot","squirell", "lion"} };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << animals[i][j] << "   " << flush;
        }
        cout << endl;
    }

    int tables[10][10] = { {}, {} };

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            if( i == 1)
            {
                tables[i][j] = j;
            }
            else
            {
                tables[i][j] = i*j;
            }
            
        }
    }

    cout << "Printing the tables 1 to 10 " << endl;
    cout << "===============================" << endl;

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            cout << tables[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}