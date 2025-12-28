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

    // Swapping without using third variable
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    // Displaying values after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << firstNumber << endl;
    cout << "Second number = " << secondNumber << endl;

    return 0;
}