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

    // Function to display value
    void display()
    {
        cout << "Value of number: " << number << endl;
    }
};

int main()
{
    Sample obj(25);   // Object creation with argument

    obj.display();

    return 0;
}