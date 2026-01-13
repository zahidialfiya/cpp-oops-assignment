#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        cout << "Outer try block started." << endl;

        try
        {
            cout << "Inner try block started." << endl;

            if (b == 0)
            {
                throw b;   // exception thrown
            }

            cout << "Result = " << a / b << endl;
        }
        catch (int)
        {
            cout << "Exception caught in inner catch block (division by zero)." << endl;
        }

        cout << "Outer try block continues." << endl;
    }
    catch (...)
    {
        cout << "Exception caught in outer catch block." << endl;
    }

    return 0;
}