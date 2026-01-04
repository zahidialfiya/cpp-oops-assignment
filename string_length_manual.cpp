#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    // Taking string input from user
    cout << "Enter a string: ";
    cin.getline(str, 100); // allows spaces

    // Calculating string length manually
    while (str[length] != '\0') // until null character
    {
        length++;
    }

    // Displaying the length
    cout << "Length of the string is: " << length << endl;

    return 0;
}