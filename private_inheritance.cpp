#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void show()
    {
        cout << "This is Base class function" << endl;
    }
};

// Derived class using private inheritance
class Derived : private Base
{
public:
    void display()
    {
        // Base class function accessible inside derived class
        show();
    }
};

int main()
{
    Derived d;

    d.display();   // Allowed

    // d.show();   // Not allowed (Base members become private)

    return 0;
}