#include <iostream>
using namespace std;

class Demo
{
private:
    int number;   // member variable

public:
    // Function with local variable having same name
    void setValue(int number)
    {
        // Local variable 'number' is assigned to member variable
        this->number = number;
    }

    // Function to display member variable
    void display()
    {
        cout << "Member variable value: " << number << endl;
    }
};

int main()
{
    Demo obj;   // Object creation

    obj.setValue(40);   // Passing value
    obj.display();

    return 0;
}