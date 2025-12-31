#include <iostream>
using namespace std;

int main()
{
    int choice;
    float area;

    // Displaying menu
    cout << "Select shape to find area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Rectangle" << endl;

    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    // Calculating area based on user choice
    if (choice == 1)
    {
        float radius;
        cout << "Enter radius of circle: ";
        cin >> radius;

        area = 3.14 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
    else if (choice == 2)
    {
        float base, height;
        cout << "Enter base of triangle: ";
        cin >> base;

        cout << "Enter height of triangle: ";
        cin >> height;

        area = 0.5 * base * height;
        cout << "Area of Triangle = " << area << endl;
    }
    else if (choice == 3)
    {
        float length, breadth;
        cout << "Enter length of rectangle: ";
        cin >> length;

        cout << "Enter breadth of rectangle: ";
        cin >> breadth;

        area = length * breadth;
        cout << "Area of Rectangle = " << area << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}