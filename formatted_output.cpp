#include <iostream>
#include <iomanip>   // for setw and setprecision
using namespace std;

int main()
{
    int id = 101;
    string name = "Ravi";
    float salary = 45678.5678;

    cout << "Employee Details\n\n";

    // Using setw for spacing
    cout << setw(10) << "ID"
         << setw(15) << "Name"
         << setw(15) << "Salary" << endl;

    // Using setprecision for decimal control
    cout << setw(10) << id
         << setw(15) << name
         << setw(15) << fixed << setprecision(2) << salary << endl;

    return 0;
}