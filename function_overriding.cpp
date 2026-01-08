#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void show()
    {
        cout << "This is Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Overriding base class function
    void show()
    {
        cout << "This is Derived class show function" << endl;
    }
};

int main()
{
    Derived obj;

    // Calling overridden function
    obj.show();

    return 0;
}