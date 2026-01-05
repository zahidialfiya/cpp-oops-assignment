#include <iostream>
using namespace std;

class Sample
{
private:
    int number;

public:
    // Default constructor
    Sample()
    {
        number = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Sample(int n)
    {
        number = n;
        cout << "Parameterized constructor called" << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value of number: " << number << endl;
    }
};

int main()
{
    Sample obj1;        // Calls default constructor
    obj1.display();

    cout << endl;

    Sample obj2(50);    // Calls parameterized constructor
    obj2.display();

    return 0;
}