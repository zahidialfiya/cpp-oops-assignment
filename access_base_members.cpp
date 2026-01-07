#include <iostream>
using namespace std;

// Base class
class Base
{
protected:
    int number;

public:
    void setNumber(int n)
    {
        number = n;
    }

    void showNumber()
    {
        cout << "Number from Base class: " << number << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void display()
    {
        // Accessing base class data member
        cout << "Accessing Base class member in Derived class: " << number << endl;
    }
};

int main()
{
    Derived d;

    // Accessing base class function using derived class object
    d.setNumber(25);
    d.showNumber();

    // Accessing base class data through derived class function
    d.display();

    return 0;
}