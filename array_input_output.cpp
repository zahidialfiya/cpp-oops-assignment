#include <iostream>
using namespace std;

int main()
{
    int size;

    // Taking size of array from user
    cout << "Enter number of elements: ";
    cin >> size;

    int numbers[size];

    // Taking array elements from user
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // Displaying array elements
    cout << "\nArray elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}