#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, temp;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    // Swapping using a third variable
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    // Displaying values after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << firstNumber << endl;
    cout << "Second number = " << secondNumber << endl;

    return 0;
}