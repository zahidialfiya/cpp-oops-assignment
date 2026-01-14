#include <iostream>
using namespace std;

// Base class
class Calculator
{
public:
    virtual int divide(int a, int b)
    {
        if (b == 0)
        {
            throw "Division by zero in base class";
        }
        return a / b;
    }

    virtual ~Calculator() {}
};

// Derived class
class SafeCalculator : public Calculator
{
public:
    // Function overriding
    int divide(int a, int b)
    {
        if (b == 0)
        {
            throw "Division by zero in derived class";
        }
        return a / b;
    }
};

int main()
{
    Calculator *calc;   // base class pointer
    SafeCalculator obj;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    try
    {
        calc = &obj;   // runtime polymorphism
        int result = calc->divide(x, y);  // calls derived function
        cout << "Result = " << result << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}