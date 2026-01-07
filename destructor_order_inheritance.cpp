#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    ~Base()
    {
        cout << "Base class destructor called" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived class destructor called" << endl;
    }
};

int main()
{
    // Creating object of derived class
    Derived obj;

    return 0;
}