#include <iostream>
using namespace std;

// Defining structure to store student details
struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    Student s1;

    // Taking input for student details
    cout << "Enter student roll number: ";
    cin >> s1.rollNumber;
    cin.ignore(); // to clear newline from buffer

    cout << "Enter student name: ";
    cin.getline(s1.name, 50);

    cout << "Enter student marks: ";
    cin >> s1.marks;

    // Displaying student details
    cout << "\nStudent Details:" << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}