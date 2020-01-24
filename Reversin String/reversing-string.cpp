#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char text[] = "kshitij";

    int nchar = sizeof(text) -1; // removed the null terminator

    char *pStart = text;
    char *pEnd = text + nchar - 1;

    while(pStart != pEnd)
    {
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }

    cout << text << endl;

    string original[] = { "kshitij", "nikhil", "shraddha", "sarah", "rohit", "jatin"};

    int arraySize = (sizeof(original) / sizeof(*original));

    string *pBegin = original;
    string *pEnding = original + arraySize -1;

    cout << "....=================================...." << endl;
    cout << *pBegin << endl;
    cout << *pEnding << endl;

    cout << (pBegin != pEnding) << endl;

    int k = 0;

    while (pBegin <= pEnding)
    {
        string temp = *pBegin;
        *pBegin = *pEnding;
        *pEnding = temp;
        pBegin++;
        pEnding--;
    }

    while(k <= 5)
    {
        cout << original[k] << endl;
        
        k++;
    }
    



    return 0;
}