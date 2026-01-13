#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;

    cout << "Enter your choice (1-int, 2-string): ";
    cin >> choice;

    try
    {
        if (choice == 1)
        {
            throw 10;   // integer exception
        }
        else if (choice == 2)
        {
            throw string("This is a string exception.");
        }
        else
        {
            throw 3.14; // some other type exception
        }
    }
    catch (...)
    {
        cout << "An exception occurred and was caught by catch(...)." << endl;
    }

    return 0;
}