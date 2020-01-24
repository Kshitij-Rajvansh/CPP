#include <iostream>

using namespace std;

int main ()
{
    int *p;

    int arr[] = {12,34,52,10,76};

    p = arr;

    for(int i = 0; i < 5; i++)
    {
        cout << p << endl;
        p++;
    }

    cout << "===================================" << endl;
    // another of iterarting using pointers

    int *pStart = arr;
    int *pEnd = &(arr[4]);

    while (true)
    {
        cout << *pStart << "  " << flush;

        if(pStart == pEnd)
        {
            break;
        }

        pStart++;
    }


    return 0;
}