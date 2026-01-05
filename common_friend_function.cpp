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
    friend void showValues(ClassA, ClassB);
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
    friend void showValues(ClassA, ClassB);
};

// Friend function definition
void showValues(ClassA objA, ClassB objB)
{
    cout << "Value from ClassA: " << objA.valueA << endl;
    cout << "Value from ClassB: " << objB.valueB << endl;
}

int main()
{
    ClassA obj1(10);
    ClassB obj2(20);

    showValues(obj1, obj2);   // Calling common friend function

    return 0;
}