#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    int id;

public:
    void setId(int i)
    {
        id = i;
    }
};

// Derived class 1
class Academic : public Person
{
protected:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }
};

// Derived class 2
class Sports
{
protected:
    int score;

public:
    void setScore(int s)
    {
        score = s;
    }
};

// Hybrid inheritance (Multiple + Multilevel)
class Result : public Academic, public Sports
{
public:
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main()
{
    Result r;

    r.setId(101);
    r.setMarks(80);
    r.setScore(70);

    r.display();

    return 0;
}