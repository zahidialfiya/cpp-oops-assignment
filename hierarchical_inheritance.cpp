#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    int value;

public:
    void setValue(int v)
    {
        value = v;
    }
};

// First derived class
class Square : public Shape
{
public:
    void area()
    {
        cout << "Area of Square: " << value * value << endl;
    }
};

// Second derived class
class Circle : public Shape
{
public:
    void area()
    {
        cout << "Area of Circle: " << 3.14 * value * value << endl;
    }
};

int main()
{
    Square sq;
    Circle cr;

    sq.setValue(5);
    sq.area();

    cr.setValue(3);
    cr.area();

    return 0;
}