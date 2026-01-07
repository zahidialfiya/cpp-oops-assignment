#include <iostream>
using namespace std;

// Base class
class Base
{
protected:
    int number;

public:
    void setValue(int n)
    {
        number = n;
    }
};

// Derived class using protected inheritance
class Derived : protected Base
{
public:
    void showValue()
    {
        // Base class members are accessible here
        cout << "Value is: " << number << endl;
    }
};

int main()
{
    Derived d;

    d.showValue();   // Allowed

    // d.setValue(10);   // Not allowed (becomes protected)

    return 0;
}