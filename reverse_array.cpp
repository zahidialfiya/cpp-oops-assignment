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

    // Reversing the array
    for (int i = 0; i < size / 2; i++)
    {
        int temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }

    // Displaying reversed array
    cout << "\nReversed array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}