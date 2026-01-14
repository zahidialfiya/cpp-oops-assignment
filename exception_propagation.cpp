#include <iostream>
using namespace std;

// Function that generates exception
void divide(int a, int b)
{
    if (b == 0)
    {
        throw b;   // exception thrown
    }
    cout << "Result = " << a / b << endl;
}

// Function that does not handle exception
void calculate(int x, int y)
{
    divide(x, y);   // exception propagates to caller
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try
    {
        calculate(num1, num2);
    }
    catch (int)
    {
        cout << "Error: Division by zero handled in main()." << endl;
    }

    return 0;
}