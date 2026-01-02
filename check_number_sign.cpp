#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;

    // Checking whether the number is positive, negative, or zero
    if (number > 0)
    {
        cout << "The number is Positive." << endl;
    }
    else if (number < 0)
    {
        cout << "The number is Negative." << endl;
    }
    else
    {
        cout << "The number is Zero." << endl;
    }

    return 0;
}