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

    // Demonstrating relational operators
    cout << "\nRelational Operator Results:" << endl;
    cout << "First number == Second number : " << (firstNumber == secondNumber) << endl;
    cout << "First number != Second number : " << (firstNumber != secondNumber) << endl;
    cout << "First number > Second number  : " << (firstNumber > secondNumber) << endl;
    cout << "First number < Second number  : " << (firstNumber < secondNumber) << endl;
    cout << "First number >= Second number : " << (firstNumber >= secondNumber) << endl;
    cout << "First number <= Second number : " << (firstNumber <= secondNumber) << endl;

    return 0;
}