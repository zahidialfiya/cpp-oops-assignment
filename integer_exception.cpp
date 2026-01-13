#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try
    {
        if (number < 0)
        {
            throw number;   // throwing integer exception
        }

        cout << "You entered a positive number: " << number << endl;
    }
    catch (int n)
    {
        cout << "Error: Negative number entered (" << n << ")" << endl;
    }

    return 0;
}