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
    fstream file;
    Student s;
    int searchRoll;
    bool found = false;

    // Open file in read & write mode
    file.open("student.dat", ios::in | ios::out | ios::binary);

    if (!file)
    {
        cout << "File not found." << endl;
        return 0;
    }

    cout << "Enter roll number to update: ";
    cin >> searchRoll;

    // Read records one by one
    while (file.read((char*)&s, sizeof(s)))
    {
        if (s.rollNumber == searchRoll)
        {
            cout << "\nRecord found. Enter new details:\n";

            cout << "Enter New Name: ";
            cin >> s.name;

            cout << "Enter New Marks: ";
            cin >> s.marks;

            // Move file pointer back to update record
            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s, sizeof(s));

            cout << "\nRecord updated successfully." << endl;
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