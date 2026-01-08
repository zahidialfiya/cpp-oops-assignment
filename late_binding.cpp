#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual function
    virtual void show()
    {
        cout << "This is Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived class show function" << endl;
    }
};

int main()
{
    Base *b;      // Base class pointer
    Derived d;    // Derived class object

    // Base pointer pointing to derived object
    b = &d;

    // Late binding happens here
    b->show();

    return 0;
}