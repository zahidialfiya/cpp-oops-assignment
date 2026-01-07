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
    // Creating object of derived class
    Derived obj;

    return 0;
}