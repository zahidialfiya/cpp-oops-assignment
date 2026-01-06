#include <iostream>
using namespace std;

class Demo
{
private:
    int number;

public:
    // Constructor
    Demo(int n)
    {
        number = n;
    }

    // Constant member function
    void show() const
    {
        cout << "Number is: " << number << endl;
    }

    // Normal member function
    void change()
    {
        number = number + 10;
    }
};

int main()
{
    Demo obj(20);

    obj.show();     // Allowed
    obj.change();   // Allowed
    obj.show();     // Updated value

    return 0;
}