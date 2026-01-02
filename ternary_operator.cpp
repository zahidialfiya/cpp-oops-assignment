#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, greaterNumber;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    // Using conditional (ternary) operator
    greaterNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;

    // Displaying the result
    cout << "\nGreater number is: " << greaterNumber << endl;

    return 0;
}