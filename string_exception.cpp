#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw string("Age must be 18 or above.");  // throwing string exception
        }

        cout << "Access granted. Age is valid." << endl;
    }
    catch (string message)
    {
        cout << "Error: " << message << endl;
    }

    return 0;
}