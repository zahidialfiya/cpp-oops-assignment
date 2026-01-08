#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Function to take input
    void setValue(int v)
    {
        value = v;
    }

    // Overloading + operator
    Number operator+(Number obj)
    {
        Number result;
        result.value = value + obj.value;
        return result;
    }

    // Function to display value
    void display()
    {
        cout << "Result: " << value << endl;
    }
};

int main()
{
    Number n1, n2, n3;

    n1.setValue(10);
    n2.setValue(20);

    // Using overloaded + operator
    n3 = n1 + n2;

    n3.display();

    return 0;
}