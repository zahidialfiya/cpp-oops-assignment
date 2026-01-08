#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual function
    virtual void display()
    {
        cout << "Display function of Base class" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void display()
    {
        cout << "Display function of Derived class" << endl;
    }
};

int main()
{
    Base *b;      // Base class pointer
    Derived d;    // Derived class object

    // Base pointer pointing to derived object
    b = &d;

    // Dynamic Method Dispatch happens here
    b->display();

    return 0;
}