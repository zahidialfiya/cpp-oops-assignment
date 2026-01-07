#include <iostream>
using namespace std;

// Base class for student details
class Student
{
protected:
    int rollNumber;
    string name;

public:
    void getStudentDetails()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter student name: ";
        cin >> name;
    }
};

// Derived class for marks processing
class Marks : public Student
{
private:
    int subject1, subject2, subject3;
    int total;
    float percentage;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects:" << endl;
        cin >> subject1 >> subject2 >> subject3;
    }

    void calculate()
    {
        total = subject1 + subject2 + subject3;
        percentage = total / 3.0;
    }

    void displayResult()
    {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Marks m;

    m.getStudentDetails();
    m.getMarks();
    m.calculate();
    m.displayResult();

    return 0;
}