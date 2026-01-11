#include <iostream>
using namespace std;

// Class Address
class Address
{
private:
    string city;
    string state;

public:
    void input()
    {
        cout << "Enter City: ";
        cin >> city;
        cout << "Enter State: ";
        cin >> state;
    }

    void display()
    {
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
    }
};

// Class Student (has Address object → Composition)
class Student
{
private:
    int rollNo;
    string name;
    Address addr;   // Composition

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Address Details:\n";
        addr.input();
    }

    void display()
    {
        cout << "\nStudent Details:\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        addr.display();
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}