#include <iostream>
using namespace std;

class DynamicMemory
{
private:
    int *ptr;   // pointer for dynamic memory

public:
    // Constructor: dynamically allocates memory
    DynamicMemory()
    {
        ptr = new int;   // memory allocation
        *ptr = 100;
        cout << "Memory allocated in constructor" << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value stored in dynamic memory: " << *ptr << endl;
    }

    // Destructor: releases allocated memory
    ~DynamicMemory()
    {
        delete ptr;   // memory deallocation
        cout << "Memory deallocated in destructor" << endl;
    }
};

int main()
{
    DynamicMemory obj;   // Object creation

    obj.display();

    return 0;   // Destructor called automatically
}