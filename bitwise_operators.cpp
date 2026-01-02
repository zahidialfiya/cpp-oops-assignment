#include <iostream>
using namespace std;

int main()
{
    int firstNumber = 5;   // 0101 in binary
    int secondNumber = 3;  // 0011 in binary

    // Displaying original values
    cout << "First number = " << firstNumber << endl;
    cout << "Second number = " << secondNumber << endl;

    // Bitwise AND
    cout << "\nBitwise AND (&): " << (firstNumber & secondNumber) << endl;

    // Bitwise OR
    cout << "Bitwise OR (|): " << (firstNumber | secondNumber) << endl;

    // Bitwise XOR
    cout << "Bitwise XOR (^): " << (firstNumber ^ secondNumber) << endl;

    // Bitwise NOT
    cout << "Bitwise NOT (~firstNumber): " << (~firstNumber) << endl;

    // Bitwise Left Shift
    cout << "Left Shift (firstNumber << 1): "
         << (firstNumber << 1) << endl;

    // Bitwise Right Shift
    cout << "Right Shift (firstNumber >> 1): "
         << (firstNumber >> 1) << endl;

    return 0;
}