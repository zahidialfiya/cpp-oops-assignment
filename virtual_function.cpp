#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal *a;   // Base class pointer
    Dog d;       // Derived class object

    a = &d;      // Pointing to derived object

    // Virtual function call
    a->sound();

    return 0;
}