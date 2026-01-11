#include <iostream>
using namespace std;

int main()
{
    string sentence;

    cout << "Enter a full sentence: ";
    getline(cin, sentence);   // reads complete line including spaces

    cout << "\nYou entered:\n";
    cout << sentence << endl;

    return 0;
}