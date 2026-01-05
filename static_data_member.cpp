#include <iostream>
using namespace std;

class Student
{
private:
    static int count;   // static data member

public:
    // Constructor increases count
    Student()
    {
        count++;
    }

    // Function to display count
    void showCount()
    {
        cout << "Number of students: " << count << endl;
    }
};

// Initializing static data member outside the class
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    s3.showCount();   // shows total number of objects created

    return 0;
}