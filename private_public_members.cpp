#include <iostream>
using namespace std;

// Defining a class with private and public members
class Student
{
private:
    int rollNumber;   // private data member
    float marks;      // private data member

public:
    // Public function to take input
    void inputDetails()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;
    }

    // Public function to display details
    void displayDetails()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;   // Creating object of Student class

    // Accessing public member functions
    s1.inputDetails();
    s1.displayDetails();

    return 0;
}