#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        if (v < 0)
        {
            throw v;   // exception from constructor
        }
        value = v;
        cout << "Constructor executed successfully." << endl;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    try
    {
        Number obj(num);   // constructor call
        obj.display();
    }
    catch (int)
    {
        cout << "Error: Negative value not allowed in constructor." << endl;
    }

    return 0;
}