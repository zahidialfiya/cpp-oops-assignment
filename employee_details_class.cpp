#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    char name[50];
    float salary;

public:
    // Function to take employee details
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;   // Object creation

    e.input();    // Read details
    e.display();  // Display details

    return 0;
}
