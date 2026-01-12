#include <iostream>
#include <fstream>
using namespace std;

// Simple class
class Student
{
public:
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

    // Write object to binary file
    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s1, sizeof(s1));
    outFile.close();

    cout << "\nData written to binary file successfully.\n";

    // Read object from binary file
    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s2, sizeof(s2));
    inFile.close();

    // Display read data
    cout << "\nData read from binary file:";
    cout << "\nRoll Number: " << s2.rollNumber;
    cout << "\nName: " << s2.name;
    cout << "\nMarks: " << s2.marks << endl;

    return 0;
}