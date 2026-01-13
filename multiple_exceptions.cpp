#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    try
    {
        if (choice == 1 && number < 0)
        {
            throw number;   // integer exception
        }
        else if (choice == 2 && number == 0)
        {
            throw string("Zero value is not allowed."); // string exception
        }
        else
        {
            cout << "No exception. Program executed successfully." << endl;
        }
    }
    catch (int n)
    {
        cout << "Integer Exception caught: Negative number (" << n << ")" << endl;
    }
    catch (string msg)
    {
        cout << "String Exception caught: " << msg << endl;
    }

    return 0;
}