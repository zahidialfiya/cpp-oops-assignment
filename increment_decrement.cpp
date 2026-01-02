#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    // Displaying initial value
    cout << "Initial value of number = " << number << endl;

    // Pre-increment
    cout << "\nPre-increment (++number): " << ++number << endl;
    cout << "Value after pre-increment = " << number << endl;

    // Post-increment
    cout << "\nPost-increment (number++): " << number++ << endl;
    cout << "Value after post-increment = " << number << endl;

    // Pre-decrement
    cout << "\nPre-decrement (--number): " << --number << endl;
    cout << "Value after pre-decrement = " << number << endl;

    // Post-decrement
    cout << "\nPost-decrement (number--): " << number-- << endl;
    cout << "Value after post-decrement = " << number << endl;

    return 0;
}