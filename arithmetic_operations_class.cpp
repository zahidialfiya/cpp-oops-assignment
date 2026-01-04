#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int a, b;

public:
    // Function to take input
    void input()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    // Arithmetic operations
    void add()
    {
        cout << "Addition: " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide()
    {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division not possible (divide by zero)" << endl;
    }
};

int main()
{
    Arithmetic obj;

    obj.input();
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();

    return 0;
}