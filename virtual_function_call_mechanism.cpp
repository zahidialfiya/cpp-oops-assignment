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
    // Overriding virtual function
    void display()
    {
        cout << "Display function of Derived class" << endl;
    }
};

int main()
{
    Base *ptr;     // Pointer to base class
    Derived obj;   // Object of derived class

    // Base pointer pointing to derived object
    ptr = &obj;

    // Virtual function call mechanism
    ptr->display();

    return 0;
}