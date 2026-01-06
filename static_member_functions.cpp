#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;                 // non-static data member
    static int count;           // static data member

public:
    // Constructor
    Student(int r)
    {
        rollNo = r;
        count++;
    }

    // Static member function
    static void showCount()
    {
        // Can access only static members
        cout << "Total number of students: " << count << endl;
    }

    // Normal member function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1(1);
    Student s2(2);
    Student s3(3);

    s1.display();
    s2.display();
    s3.display();

    // Calling static member function
    Student::showCount();

    return 0;
}