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

    // Assuming first element is the largest
    int largest = numbers[0];

    // Finding the largest element
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    // Displaying the result
    cout << "\nLargest element in the array is: " << largest << endl;

    return 0;
}