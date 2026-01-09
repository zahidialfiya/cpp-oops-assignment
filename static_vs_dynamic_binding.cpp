#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Normal function (Static Binding)
    void showStatic()
    {
        cout << "Static Binding: Base class function" << endl;
    }

    // Virtual function (Dynamic Binding)
    virtual void showDynamic()
    {
        cout << "Dynamic Binding: Base class function" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void showStatic()
    {
        cout << "Static Binding: Derived class function" << endl;
    }

    void showDynamic()
    {
        cout << "Dynamic Binding: Derived class function" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;

    // Base pointer pointing to derived object
    b = &d;

    // Static binding (decided at compile time)
    b->showStatic();

    // Dynamic binding (decided at runtime)
    b->showDynamic();

    return 0;
}