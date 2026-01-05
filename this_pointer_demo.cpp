#include <iostream>
using namespace std;

class Sample
{
private:
    int value;

public:
    // Function to set value using this pointer
    void setValue(int value)
    {
        // this->value refers to data member
        // value refers to function parameter
        this->value = value;
    }

    // Function to display value
    void display()
    {
        cout << "Value is: " << value << endl;
    }
};

int main()
{
    Sample obj;   // Object creation

    obj.setValue(25);   // Passing value
    obj.display();

    return 0;
}