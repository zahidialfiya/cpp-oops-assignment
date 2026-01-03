#include <iostream>
using namespace std;

int main()
{
    int limit;

    // Taking limit from user
    cout << "Enter the limit: ";
    cin >> limit;

    // Printing series using for loop
    cout << "Series: ";
    for (int i = 1; i <= limit; i++)
    {
        cout << i << " ";
    }

    return 0;
}