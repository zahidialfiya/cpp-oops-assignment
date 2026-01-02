#include <iostream>
using namespace std;

int main()
{
    int number;

    // Simple assignment operator
    number = 10;
    cout << "Initial value of number = " << number << endl;

    // Addition assignment operator (+=)
    number += 5;
    cout << "After number += 5, value = " << number << endl;

    // Subtraction assignment operator (-=)
    number -= 3;
    cout << "After number -= 3, value = " << number << endl;

    // Multiplication assignment operator (*=)
    number *= 2;
    cout << "After number *= 2, value = " << number << endl;

    // Division assignment operator (/=)
    number /= 4;
    cout << "After number /= 4, value = " << number << endl;

    // Modulus assignment operator (%=)
    number %= 3;
    cout << "After number %= 3, value = " << number << endl;

    return 0;
}