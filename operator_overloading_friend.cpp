#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v)
    {
        value = v;
    }

    // Friend function to overload + operator
    friend Number operator +(Number n1, Number n2);

    // Function to display value
    void display()
    {
        cout << "Value: " << value << endl;
    }
};

// Overloading + operator using friend function
Number operator +(Number n1, Number n2)
{
    Number temp(0);
    temp.value = n1.value + n2.value;
    return temp;
}

int main()
{
    Number obj1(10);
    Number obj2(20);

    Number result = obj1 + obj2;   // Operator overloading

    result.display();

    return 0;
}