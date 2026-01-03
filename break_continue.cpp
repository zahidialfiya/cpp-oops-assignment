#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "Demonstrating break statement:" << endl;

    // Using break statement
    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;   // Loop stops when i becomes 6
        }
        cout << i << " ";
    }

    cout << "\n\nDemonstrating continue statement:" << endl;

    // Using continue statement
    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;   // Skips number 6
        }
        cout << i << " ";
    }

    return 0;
}