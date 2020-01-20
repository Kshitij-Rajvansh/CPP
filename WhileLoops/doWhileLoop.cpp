#include <iostream>

using namespace std;

int main ()
{
    /* int value = 6;

      do{
            cout << "C++ is awesome..." << endl;
            value--;
        } while (value > 0); 
    */
   const string password = "hello";
   string input;

   do{
       cout << "Enter your password > " << flush;
       cin >> input;

       if(input != password)
       {
           cout << "Access Denied." << endl;
       }
   } while (input != password);

   cout << "Password Accepted..." << endl;
   

    return 0;
}