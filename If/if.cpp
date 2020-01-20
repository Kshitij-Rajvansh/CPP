#include <iostream>

using namespace std;

int main () 
{
    string password = "hello";

    cout << "Enter the password > " << flush;

    string enteredPassword = "";
    cin >> enteredPassword;

    if(enteredPassword == password)
    {
        cout << "You are logged in." << endl;
    }
    else
    {
        cout << "Access Denied." << endl;
    }
    

    return 0;
}