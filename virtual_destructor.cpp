#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual destructor
    virtual ~Base()
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
    // Base class pointer pointing to derived object
    Base *b = new Derived();

    // Deleting object using base class pointer
    delete b;

    return 0;
}