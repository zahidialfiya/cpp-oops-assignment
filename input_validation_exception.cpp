#include <iostream>
using namespace std;

int main()
{
    int age;

    try
    {
        cout << "Enter your age: ";
        cin >> age;

        if (age < 0 || age > 120)
        {
            throw age;   // invalid input
        }

        cout << "Valid age entered: " << age << endl;
    }
    catch (int)
    {
        cout << "Error: Invalid age entered." << endl;
    }

    return 0;
}