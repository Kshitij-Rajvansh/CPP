#include <iostream>
#include <sstream>

using namespace std;

int main ()
{
    string name = "Bob";
    int age = 32;
    double height = 167.4832;

    stringstream ss;

    ss << "name is : ";
    ss << name;
    ss << "; age is : ";
    ss << age;
    ss << "; Height is : ";
    ss << height; 

    string info = ss.str();

    cout << info << endl;

    return 0;
}