#include <iostream>
using namespace std;

int main()
{
    int integerNumber = 10;
    float floatNumber;
    double doubleNumber = 25.75;
    int convertedNumber;

    // Implicit type casting (int to float)
    floatNumber = integerNumber;

    cout << "Implicit Type Casting:" << endl;
    cout << "Integer value: " << integerNumber << endl;
    cout << "Converted to float: " << floatNumber << endl;

    // Explicit type casting (double to int)
    convertedNumber = (int)doubleNumber;

    cout << "\nExplicit Type Casting:" << endl;
    cout << "Double value: " << doubleNumber << endl;
    cout << "Converted to int: " << convertedNumber << endl;

    return 0;
}