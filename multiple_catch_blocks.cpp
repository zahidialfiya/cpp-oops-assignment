#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw b;              // int exception
        }
        if (a < 0)
        {
            throw 'a';            // char exception
        }

        cout << "Result = " << a / b << endl;
    }
    catch (int)
    {
        cout << "Error: Division by zero." << endl;
    }
    catch (char)
    {
        cout << "Error: Negative number not allowed." << endl;
    }

    return 0;
}