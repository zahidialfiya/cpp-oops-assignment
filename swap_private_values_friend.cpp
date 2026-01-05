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
    friend void swapValues(ClassA &, ClassB &);

    void display()
    {
        cout << "Value of ClassA: " << valueA << endl;
    }
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
    friend void swapValues(ClassA &, ClassB &);

    void display()
    {
        cout << "Value of ClassB: " << valueB << endl;
    }
};

// Friend function to swap private values
void swapValues(ClassA &objA, ClassB &objB)
{
    int temp;
    temp = objA.valueA;
    objA.valueA = objB.valueB;
    objB.valueB = temp;
}

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    swapValues(objA, objB);   // Swapping private data

    cout << "After swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}