#include <iostream>
using namespace std;

class Calculator
{
private:
    int number1;
    int number2;

public:
    // Function to take input
    void getValues()
    {
        cout << "Enter first number: ";
        cin >> number1;

        cout << "Enter second number: ";
        cin >> number2;
    }

    // Function to add numbers
    void add()
    {
        int sum = number1 + number2;
        cout << "Addition: " << sum << endl;
    }

    // Function to subtract numbers
    void subtract()
    {
        int result = number1 - number2;
        cout << "Subtraction: " << result << endl;
    }
};

int main()
{
    Calculator calc;   // object creation

    calc.getValues();  // input
    calc.add();        // addition
    calc.subtract();  // subtraction

    return 0;
}