#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    // Demonstrating arithmetic operators
    cout << "\nAddition: " << firstNumber + secondNumber << endl;
    cout << "Subtraction: " << firstNumber - secondNumber << endl;
    cout << "Multiplication: " << firstNumber * secondNumber << endl;

    // Checking division and modulus carefully
    if (secondNumber != 0)
    {
        cout << "Division: " << firstNumber / secondNumber << endl;
        cout << "Modulus: " << firstNumber % secondNumber << endl;
    }
    else
    {
        cout << "Division and Modulus not possible (second number is zero)" << endl;
    }

    return 0;
}