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
    Student s;
    int searchRoll;
    bool found = false;

    // Open file in read mode
    ifstream file("student.dat", ios::binary);

    if (!file)
    {
        cout << "File not found." << endl;
        return 0;
    }

    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    // Read records one by one
    while (file.read((char*)&s, sizeof(s)))
    {
        if (s.rollNumber == searchRoll)
        {
            cout << "\nRecord Found!";
            cout << "\nRoll Number: " << s.rollNumber;
            cout << "\nName: " << s.name;
            cout << "\nMarks: " << s.marks << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nRecord not found." << endl;
    }

    file.close();
    return 0;
}