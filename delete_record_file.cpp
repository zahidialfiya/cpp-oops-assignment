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
    ifstream inFile;
    ofstream outFile;
    Student s;
    int deleteRoll;
    bool found = false;

    // Open original file
    inFile.open("student.dat", ios::binary);

    if (!inFile)
    {
        cout << "File not found." << endl;
        return 0;
    }

    // Open temporary file
    outFile.open("temp.dat", ios::binary);

    cout << "Enter roll number to delete: ";
    cin >> deleteRoll;

    // Copy all records except the one to be deleted
    while (inFile.read((char*)&s, sizeof(s)))
    {
        if (s.rollNumber == deleteRoll)
        {
            found = true;   // Record found
        }
        else
        {
            outFile.write((char*)&s, sizeof(s));
        }
    }

    inFile.close();
    outFile.close();

    // Delete original file and rename temp file
    remove("student.dat");
    rename("temp.dat", "student.dat");

    if (found)
    {
        cout << "\nRecord deleted successfully." << endl;
    }
    else
    {
        cout << "\nRecord not found." << endl;
    }

    return 0;
}