#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle" << endl;
    }
};

int main()
{
    // Array of base class pointers
    Shape *shapes[2];

    Circle c;
    Rectangle r;

    // Storing derived objects in base class pointer array
    shapes[0] = &c;
    shapes[1] = &r;

    // Calling virtual function using array
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw();
    }

    return 0;
}