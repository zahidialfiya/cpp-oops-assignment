#include <iostream>
using namespace std;

class Student
{
private:
    const int rollNumber;   // const data member
    const float marks;      // const data member

public:
    // Constructor using initializer list
    Student(int r, float m) : rollNumber(r), marks(m)
    {
        cout << "Constructor called" << endl;
    }

    // Function to display values
    void display()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, 85.5);   // Object creation

    s1.display();

    return 0;
}