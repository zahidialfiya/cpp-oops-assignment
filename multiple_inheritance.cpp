#include <iostream>
using namespace std;

// First base class
class Sports
{
protected:
    int sportsMarks;

public:
    void setSportsMarks(int s)
    {
        sportsMarks = s;
    }
};

// Second base class
class Academic
{
protected:
    int academicMarks;

public:
    void setAcademicMarks(int a)
    {
        academicMarks = a;
    }
};

// Derived class inheriting from two base classes
class Result : public Sports, public Academic
{
public:
    void display()
    {
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Academic Marks: " << academicMarks << endl;
        cout << "Total Marks: " << sportsMarks + academicMarks << endl;
    }
};

int main()
{
    Result r;

    r.setSportsMarks(40);
    r.setAcademicMarks(60);
    r.display();

    return 0;
}