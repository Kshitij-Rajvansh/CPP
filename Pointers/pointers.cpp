#include <iostream>

using namespace std;

void manipulateTemporarily (int num)
{
    cout << "2. Value before manipulating : " << num << endl;

    num = 50;

    cout << "3. Value after manipulating : " << num << endl;
}

void manipulateSeriously(int* ptrValue)
{
    cout << "5. Value before manipulating seriously : " << *ptrValue << endl;

    *ptrValue = 50;

    cout << "6. Value after manipulating seriously : " << *ptrValue << endl;
}

void Swap( int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main ()
{
    int nValue = 12;

    int* ptrValue = &nValue; // this referencing

    cout << "Integer value : " << nValue << endl;
    cout << "Integer address value : " << ptrValue << endl;
    cout << "Integer value from pointer : " << *ptrValue << endl;  // this de-referencing of pointer

    cout << "================================" << endl;

    int num = 23;
    int* ptrNum = &num;

    cout << "1. Original value : " << num << endl;

    manipulateTemporarily(num); // here we are actually creating the copy of the variable num i.e. passing the value

    cout << "4. Value after passing to manipulate function : " << num << endl;

    manipulateSeriously(ptrNum); // passing by reference

    cout << "7. Value after manipulating seriously : " << num << endl;

    int x = 25;
    int y = 87;

    Swap(&x, &y);

    cout << "=============================" << endl;
    cout << "x : " << x << endl;
    cout << "Y : " << y << endl;


    return 0;
}