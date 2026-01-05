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
        number = 10;
        cout << "Default constructor called" << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value of number: " << number << endl;
    }
};

int main()
{
    Sample obj;   // Object creation, constructor is called automatically

    obj.display();

    return 0;
}