#include <iostream>
using namespace std;

int main()
{
    char inputCharacter;
    int asciiValue;

    // Taking a character from user
    cout << "Enter a character: ";
    cin >> inputCharacter;

    // Converting character to its ASCII value
    asciiValue = inputCharacter;

    // Displaying the ASCII value
    cout << "ASCII value of '" << inputCharacter << "' is: " << asciiValue << endl;

    return 0;
}