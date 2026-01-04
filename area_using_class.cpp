#include <iostream>
using namespace std;

class Area
{
public:
    // Function to calculate area of circle
    void circle()
    {
        float radius, area;
        cout << "Enter radius of circle: ";
        cin >> radius;

        area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    // Function to calculate area of rectangle
    void rectangle()
    {
        float length, breadth, area;
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;

        area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }

    // Function to calculate area of triangle
    void triangle()
    {
        float base, height, area;
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;

        area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main()
{
    Area obj;   // Object creation
    int choice;

    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        obj.circle();
    else if (choice == 2)
        obj.rectangle();
    else if (choice == 3)
        obj.triangle();
    else
        cout << "Invalid choice" << endl;

    return 0;
}