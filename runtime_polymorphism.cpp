#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function
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
    Shape *shapePtr;

    Circle c;
    Rectangle r;

    // Base class pointer pointing to Circle object
    shapePtr = &c;
    shapePtr->draw();

    // Base class pointer pointing to Rectangle object
    shapePtr = &r;
    shapePtr->draw();

    return 0;
}