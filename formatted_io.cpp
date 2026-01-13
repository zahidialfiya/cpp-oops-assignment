#include <iostream>
#include <iomanip>   // for manipulators
using namespace std;

int main()
{
    int rollNumber = 12;
    string name = "Aman";
    float marks = 89.5678;

    cout << "Student Details\n";
    cout << "-----------------------\n";

    // Formatted output using manipulators
    cout << setw(15) << "Roll Number" << setw(10) << rollNumber << endl;
    cout << setw(15) << "Name" << setw(10) << name << endl;
    cout << setw(15) << "Marks" << setw(10)
         << fixed << setprecision(2) << marks << endl;

    return 0;
}