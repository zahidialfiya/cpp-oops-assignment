#include <iostream>
using namespace std;

// User-defined exception class
class InvalidAge
{
public:
    void showMessage()
    {
        cout << "Error: Age must be 18 or above." << endl;
    }
};

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw InvalidAge();   // throwing user-defined exception
        }

        cout << "Age is valid. Access granted." << endl;
    }
    catch (InvalidAge e)
    {
        e.showMessage();   // handling exception
    }

    return 0;
}