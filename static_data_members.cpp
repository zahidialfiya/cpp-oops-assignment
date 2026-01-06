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
        count++;                // increment static variable
    }

    // Function to display details
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}