#include <iostream>
using namespace std;

// Abstract base class
class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};

// Another derived class
class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a square" << endl;
    }
};

int main()
{
    Shape *s;

    Circle c;
    Square sq;

    // Runtime polymorphism
    s = &c;
    s->draw();

    s = &sq;
    s->draw();

    return 0;
}