#include <iostream>

using namespace std;

void ReverseArrayInPlace ( string text[], int textLen)
{

    string *PStart = text;
    string *pEnd = text + textLen -1;

    cout << *pEnd << endl;
}

int main ()
{
    const int elements = 5;

    string texts[elements] = { "one", "two", "three", "four", "five" };

    string *pTexts = texts;

    string *pEnd = &(texts[elements-1]);

    // pEnd -= 2;
    // cout << *pEnd << endl;

    long difference = (long)(pEnd-pTexts);

    cout << difference << endl;

    while (true)
    {
        cout << *pTexts << " " << flush;

        if(pTexts == pEnd)
        {
            break;
        }
        pTexts++;
    }

    return 0;
}