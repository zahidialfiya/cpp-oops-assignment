#include <iostream>
using namespace std;

// Class for Employee Payroll System
class Employee
{
private:
    int employeeId;
    string employeeName;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;

public:
    // Function to input employee details
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeId;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate salary
    void calculateSalary()
    {
        hra = basicSalary * 0.20;   // 20% HRA
        da  = basicSalary * 0.10;   // 10% DA
        grossSalary = basicSalary + hra + da;
    }

    // Function to display payroll details
    void displayPayroll()
    {
        cout << "\n--- Employee Payroll Details ---" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Employee emp;

    emp.inputDetails();
    emp.calculateSalary();
    emp.displayPayroll();

    return 0;
}