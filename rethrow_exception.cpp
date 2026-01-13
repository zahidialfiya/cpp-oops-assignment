#include <iostream>
using namespace std;

void divide(int a, int b)
{
    try
    {
        if (b == 0)
        {
            throw b;   // throw exception
        }
        cout << "Result = " << a / b << endl;
    }
    catch (int)
    {
        cout << "Exception caught in divide() function." << endl;
        throw;   // rethrowing the same exception
    }
}

int main()
{
    try
    {
        divide(10, 0);
    }
    catch (int)
    {
        cout << "Exception re-caught in main()." << endl;
    }

    return 0;
}