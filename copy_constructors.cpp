#include <iostream>
using namespace std;

class Sample
{
private:
    int number;

public:
    // Parameterized constructor
    Sample(int n)
    {
        number = n;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Sample(const Sample &obj)
    {
        number = obj.number;
        cout << "Copy constructor called" << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value of number: " << number << endl;
    }
};

int main()
{
    Sample obj1(30);   // Calls parameterized constructor
    obj1.display();

    cout << endl;

    Sample obj2 = obj1;   // Calls copy constructor
    obj2.display();

    return 0;
}