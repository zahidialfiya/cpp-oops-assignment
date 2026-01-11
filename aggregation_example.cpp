#include <iostream>
using namespace std;

// Class Address
class Address
{
public:
    string city;
    string state;

    Address(string c, string s)
    {
        city = c;
        state = s;
    }

    void display()
    {
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
    }
};

// Class Employee (uses Address object → Aggregation)
class Employee
{
private:
    int empId;
    string name;
    Address *addr;   // Aggregation (pointer)

public:
    Employee(int id, string n, Address *a)
    {
        empId = id;
        name = n;
        addr = a;
    }

    void display()
    {
        cout << "\nEmployee Details:\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        addr->display();
    }
};

int main()
{
    Address a("Delhi", "UP");   // Address object exists independently

    Employee e(101, "Amit", &a);   // Aggregation

    e.display();

    return 0;
}