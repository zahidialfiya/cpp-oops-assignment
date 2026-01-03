#include <iostream>
using namespace std;

int main()
{
    int number;
    int i = 1;

    // Taking number from user
    cout << "Enter a number to print its table: ";
    cin >> number;

    // Printing table using while loop
    while (i <= 10)
    {
        cout << number << " x " << i << " = " << number * i << endl;
        i++;
    }

    return 0;
}