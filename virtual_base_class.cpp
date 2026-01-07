#include <iostream>
using namespace std;

// Virtual base class
class A
{
public:
    int value;

    A()
    {
        value = 10;
        cout << "Constructor of class A" << endl;
    }
};

// First derived class
class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of class B" << endl;
    }
};

// Second derived class
class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of class C" << endl;
    }
};

// Derived class from B and C
class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of class D" << endl;
        cout << "Value from class A: " << value << endl;
    }
};

int main()
{
    D obj;

    return 0;
}