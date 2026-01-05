#include <iostream>
using namespace std;

class ClassB;   // Forward declaration

class ClassA
{
private:
    int valueA;

public:
    ClassA(int a)
    {
        valueA = a;
    }

    // Declaring friend function
    friend void compareValues(ClassA, ClassB);
};

class ClassB
{
private:
    int valueB;

public:
    ClassB(int b)
    {
        valueB = b;
    }

    // Declaring same friend function
    friend void compareValues(ClassA, ClassB);
};

// Friend function to compare private data
void compareValues(ClassA objA, ClassB objB)
{
    if (objA.valueA > objB.valueB)
    {
        cout << "ClassA has greater value: " << objA.valueA << endl;
    }
    else if (objA.valueA < objB.valueB)
    {
        cout << "ClassB has greater value: " << objB.valueB << endl;
    }
    else
    {
        cout << "Both values are equal." << endl;
    }
}

int main()
{
    ClassA a1(40);
    ClassB b1(30);

    compareValues(a1, b1);   // Comparing private data

    return 0;
}