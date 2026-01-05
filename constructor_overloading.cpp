#include <iostream>
using namespace std;

class Sample
{
private:
    int number;
    float value;

public:
    // Default constructor
    Sample()
    {
        number = 0;
        value = 0.0;
        cout << "Default constructor called" << endl;
    }

    // Constructor with one parameter
    Sample(int n)
    {
        number = n;
        value = 0.0;
        cout << "Constructor with one parameter called" << endl;
    }

    // Constructor with two parameters
    Sample(int n, float v)
    {
        number = n;
        value = v;
        cout << "Constructor with two parameters called" << endl;
    }

    // Function to display values
    void display()
    {
        cout << "Number: " << number << endl;
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Sample obj1;             // Calls default constructor
    obj1.display();

    cout << endl;

    Sample obj2(10);         // Calls one-parameter constructor
    obj2.display();

    cout << endl;

    Sample obj3(20, 5.5);    // Calls two-parameter constructor
    obj3.display();

    return 0;
}