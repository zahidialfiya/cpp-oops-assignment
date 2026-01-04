#include <iostream>
using namespace std;

// Defining a simple class
class Student
{
public:
    int rollNumber;
    float marks;

    // Member function to take input
    void inputDetails()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;
    }

    // Member function to display details
    void displayDetails()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;   // Creating object of class Student

    // Calling member functions using object
    s1.inputDetails();
    s1.displayDetails();

    return 0;
}