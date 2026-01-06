#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }
};

// Derived class (Level 1)
class Student : public Person
{
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }
};

// Derived class (Level 2)
class Result : public Student
{
public:
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Result r;

    r.setAge(20);        // from Person
    r.setRollNo(101);    // from Student
    r.display();         // from Result

    return 0;
}