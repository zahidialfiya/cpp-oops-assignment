#include <iostream>
using namespace std;

int main()
{
    int limit;
    int i = 1;

    // Taking limit from user
    cout << "Enter the limit: ";
    cin >> limit;

    // Printing series using do-while loop
    do
    {
        cout << i << " ";
        i++;
    } while (i <= limit);

    return 0;
}