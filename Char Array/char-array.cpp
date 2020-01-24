#include <iostream>

using namespace std;

int main ()
{
    char texts[] = { 'H','e','l','l','o'}; // this also valid

    char text[] = "Hello"; // this is also valid

    cout << texts << " ====== " << text << flush;

    cout << endl << "//////////////////////////" << endl;

    for(int i = 0; i < sizeof(text); i++)
    {
        cout << i << " => " << text[i] << endl;
    }

    int k = 0;
    while(text[k] != 0)
    {
        cout << endl << text[k] << flush;
        k++;
    }

    return 0;
}