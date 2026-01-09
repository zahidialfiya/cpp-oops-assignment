#include <iostream>
using namespace std;

// Abstract base class
class Shape
{
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class: Circle
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main()
{
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);

    // Using base class pointer
    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}