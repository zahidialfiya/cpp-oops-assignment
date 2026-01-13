#include <iostream>
using namespace std;

// Function declarations
void function1();
void function2();
void function3();

void function1()
{
    cout << "Inside Function 1" << endl;
    function2();
    cout << "End of Function 1" << endl; // will not execute
}

void function2()
{
    cout << "Inside Function 2" << endl;
    function3();
    cout << "End of Function 2" << endl; // will not execute
}

void function3()
{
    cout << "Inside Function 3" << endl;
    throw 100;   // exception thrown here
}

int main()
{
    try
    {
        function1();
    }
    catch (int x)
    {
        cout << "Exception caught in main: " << x << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}