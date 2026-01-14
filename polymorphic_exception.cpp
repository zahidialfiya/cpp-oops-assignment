#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual double area() = 0;   // pure virtual function
    virtual ~Shape() {}
};

// Derived class
class Rectangle : public Shape
{
    double length, breadth;

public:
    Rectangle(double l, double b)
    {
        if (l <= 0 || b <= 0)
        {
            throw "Invalid dimensions for rectangle";
        }
        length = l;
        breadth = b;
    }

    double area()
    {
        return length * breadth;
    }
};

int main()
{
    Shape *s;   // base class pointer

    try
    {
        double l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;

        s = new Rectangle(l, b);   // polymorphic object creation
        cout << "Area of rectangle = " << s->area() << endl;

        delete s;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}