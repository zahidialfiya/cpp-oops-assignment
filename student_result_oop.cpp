#include <iostream>
using namespace std;

// Class for Student Result Processing
class Student
{
private:
    int rollNumber;
    string name;
    int marks1, marks2, marks3;
    int total;
    float percentage;

public:
    // Function to take student details
    void inputDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter marks of three subjects:" << endl;
        cin >> marks1 >> marks2 >> marks3;
    }

    // Function to calculate total and percentage
    void calculateResult()
    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3.0;
    }

    // Function to display result
    void displayResult()
    {
        cout << "\n--- Student Result ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.calculateResult();
    s.displayResult();

    return 0;
}