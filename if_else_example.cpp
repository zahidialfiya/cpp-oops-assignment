#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;

    // Using if-else statement
    if (number % 2 == 0)
    {
        cout << "The number is Even." << endl;
    }
    else
    {
        cout << "The number is Odd." << endl;
    }

    return 0;
}