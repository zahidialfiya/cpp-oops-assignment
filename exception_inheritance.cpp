#include <iostream>
using namespace std;

// Base exception class
class MyException
{
public:
    virtual void showError()
    {
        cout << "General exception occurred." << endl;
    }
};

// Derived exception class
class DivideByZeroException : public MyException
{
public:
    void showError()
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw DivideByZeroException();  // throw derived exception
        }

        cout << "Result = " << a / b << endl;
    }
    catch (MyException &e)
    {
        e.showError();   // runtime polymorphism
    }

    return 0;
}