#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;

    // Using nested if statement
    if (number >= 0)
    {
        if (number == 0)
        {
            cout << "The number is Zero." << endl;
        }
        else
        {
            cout << "The number is Positive." << endl;
        }
    }
    else
    {
        cout << "The number is Negative." << endl;
    }

    return 0;
}