#include <iostream>
using namespace std;

int main()
{
    char source[100], destination[100];
    int i = 0;

    // Taking string input from user
    cout << "Enter a string to copy: ";
    cin.getline(source, 100);

    // Copying string manually
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // null-terminate the copied string

    // Displaying the copied string
    cout << "Copied string is: " << destination << endl;

    return 0;
}