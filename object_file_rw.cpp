#include <iostream>
#include <fstream>
using namespace std;

// Student class
class Student
{
private:
    int rollNo;
    char name[30];
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{
    Student s;

    // Writing object to file
    ofstream outFile("student.dat", ios::binary);
    s.input();
    outFile.write((char*)&s, sizeof(s));
    outFile.close();

    cout << "\nObject written to file successfully.\n";

    // Reading object from file
    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s, sizeof(s));
    inFile.close();

    cout << "\nObject read from file:";
    s.display();

    return 0;
}