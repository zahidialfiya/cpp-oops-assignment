#include <iostream>
using namespace std;

// First base class
class ClassA
{
public:
    void show()
    {
        cout << "Show function of ClassA" << endl;
    }
};

// Second base class
class ClassB
{
public:
    void show()
    {
        cout << "Show function of ClassB" << endl;
    }
};

// Derived class (Multiple Inheritance)
class Derived : public ClassA, public ClassB
{
public:
    void display()
    {
        // Resolving ambiguity using scope resolution operator
        ClassA::show();
        ClassB::show();
    }
};

int main()
{
    Derived obj;

    // obj.show();  // This will cause ambiguity error

    obj.display();  // Correct way

    return 0;
}