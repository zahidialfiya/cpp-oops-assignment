#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Function to add two float numbers
    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    cout << "Addition of two integers: " << calc.add(10, 20) << endl;
    cout << "Addition of three integers: " << calc.add(5, 10, 15) << endl;
    cout << "Addition of two float numbers: " << calc.add(2.5f, 3.5f) << endl;

    return 0;
}