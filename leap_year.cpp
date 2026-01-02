#include <iostream>
using namespace std;

int main()
{
    int year;

    // Taking year input from user
    cout << "Enter a year: ";
    cin >> year;

    // Checking leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a Leap Year." << endl;
    }
    else
    {
        cout << year << " is not a Leap Year." << endl;
    }

    return 0;
}