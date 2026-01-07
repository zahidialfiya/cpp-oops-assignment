#include <iostream>
using namespace std;

// Base class for employee details
class Employee
{
protected:
    int employeeId;
    string employeeName;

public:
    void getEmployeeDetails()
    {
        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter employee name: ";
        cin >> employeeName;
    }
};

// Derived class for payroll processing
class Payroll : public Employee
{
private:
    float basicSalary;
    float hra;
    float da;
    float grossSalary;

public:
    void getSalaryDetails()
    {
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void calculateSalary()
    {
        hra = basicSalary * 0.20;   // 20% HRA
        da  = basicSalary * 0.10;   // 10% DA
        grossSalary = basicSalary + hra + da;
    }

    void displayPayroll()
    {
        cout << "\nEmployee Payroll Details" << endl;
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
    Payroll p;

    p.getEmployeeDetails();
    p.getSalaryDetails();
    p.calculateSalary();
    p.displayPayroll();

    return 0;
}