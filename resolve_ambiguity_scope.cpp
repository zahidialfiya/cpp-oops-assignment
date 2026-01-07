#include <iostream>
using namespace std;

// First base class
class Base1
{
public:
    void display()
    {
        cout << "Display function of Base1" << endl;
    }
};

// Second base class
class Base2
{
public:
    void display()
    {
        cout << "Display function of Base2" << endl;
    }
};

// Derived class
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        // Resolving ambiguity using scope resolution operator
        Base1::display();
        Base2::display();
    }
};

int main()
{
    Derived obj;

    // obj.display();  // Ambiguity error

    obj.show();   // Correct way

    return 0;
}