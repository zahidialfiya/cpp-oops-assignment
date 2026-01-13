#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw denominator;   // throw exception
        }

        cout << "Result = " << numerator / denominator << endl;
    }
    catch (int)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}