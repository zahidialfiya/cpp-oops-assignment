#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int rollNumber;
    char name[30];
    float marks;

    // Writing student data to file
    ofstream outFile("student.txt");

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    outFile << rollNumber << endl;
    outFile << name << endl;
    outFile << marks << endl;

    outFile.close();

    cout << "\nStudent data stored successfully.\n";

    // Reading student data from file
    ifstream inFile("student.txt");

    cout << "\nStudent Data from File:\n";
    inFile >> rollNumber;
    inFile >> name;
    inFile >> marks;

    cout << "Roll Number: " << rollNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    inFile.close();

    return 0;
}