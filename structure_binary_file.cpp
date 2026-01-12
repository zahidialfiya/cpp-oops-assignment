#include <iostream>
#include <fstream>
using namespace std;

// Structure definition
struct Student
{
    int rollNumber;
    char name[30];
    float marks;
};

int main()
{
    Student s1, s2;

    // Input student details
    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    // Write structure to binary file
    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s1, sizeof(s1));
    outFile.close();

    cout << "\nStudent record stored successfully.\n";

    // Read structure from binary file
    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s2, sizeof(s2));
    inFile.close();

    // Display retrieved data
    cout << "\nStudent record retrieved from file:";
    cout << "\nRoll Number: " << s2.rollNumber;
    cout << "\nName: " << s2.name;
    cout << "\nMarks: " << s2.marks << endl;

    return 0;
}