#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    // Demonstrating logical AND (&&)
    cout << "\nLogical AND (&&): " << endl;
    cout << "(number1 > 0 && number2 > 0) = "
         << (number1 > 0 && number2 > 0) << endl;

    // Demonstrating logical OR (||)
    cout << "\nLogical OR (||): " << endl;
    cout << "(number1 > 0 || number2 > 0) = "
         << (number1 > 0 || number2 > 0) << endl;

    // Demonstrating logical NOT (!)
    cout << "\nLogical NOT (!): " << endl;
    cout << "!(number1 > 0) = " << !(number1 > 0) << endl;

    return 0;
}