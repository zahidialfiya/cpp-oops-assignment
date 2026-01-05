#include <iostream>
using namespace std;

// Forward declaration
class ClassB;

class ClassA
{
private:
    int valueA;

public:
    ClassA(int a)
    {
        valueA = a;
    }

    // Declaring ClassB as friend class
    friend class ClassB;
};

class ClassB
{
public:
    void showValue(ClassA obj)
    {
        // Accessing private data of ClassA
        cout << "Value from ClassA: " << obj.valueA << endl;
    }
};

int main()
{
    ClassA objA(100);
    ClassB objB;

    objB.showValue(objA);   // Access via friend class

    return 0;
}