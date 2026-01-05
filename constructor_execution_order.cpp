#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    Base()
    {
        cout << "Base class constructor called" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor called" << endl;
    }
};

int main()
{
    Derived obj;   // Object of derived class

    return 0;
}