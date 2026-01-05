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

    // ClassB is friend of ClassA
    friend class ClassB;
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

    // Accessing private data of ClassA (allowed)
    void showA(ClassA obj)
    {
        cout << "Value from ClassA: " << obj.valueA << endl;
    }
};

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    objB.showA(objA);

    // ClassA cannot access private data of ClassB
    // Uncommenting the below line will cause error
    // cout << objB.valueB;

    return 0;
}