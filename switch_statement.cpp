#include <iostream>
using namespace std;

int main()
{
    int choice;
    int number1, number2;

    // Displaying menu
    cout << "Simple Calculator using Switch Statement" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    // Taking user choice
    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    // Taking two numbers
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    // Switch statement
    switch (choice)
    {
        case 1:
            cout << "Result = " << number1 + number2 << endl;
            break;

        case 2:
            cout << "Result = " << number1 - number2 << endl;
            break;

        case 3:
            cout << "Result = " << number1 * number2 << endl;
            break;

        case 4:
            if (number2 != 0)
                cout << "Result = " << number1 / number2 << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}