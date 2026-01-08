#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual function
    virtual void show()
    {
        cout << "Show function of Base class" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Overriding base class function
    void show()
    {
        cout << "Show function of Derived class" << endl;
    }
};

int main()
{
    Base *b;     // Pointer to base class
    Derived d;   // Object of derived class

    // Base class pointer pointing to derived class object
    b = &d;

    // Calling derived class function using base class pointer
    b->show();

    return 0;
}