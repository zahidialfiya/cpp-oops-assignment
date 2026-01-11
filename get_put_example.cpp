#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    ch = cin.get();   // reads a single character

    cout << "You entered: ";
    cout.put(ch);     // displays a single character

    cout << endl;

    return 0;
}