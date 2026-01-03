#include <iostream>
using namespace std;

int main()
{
    int size;

    // Taking size of array from user
    cout << "Enter number of elements: ";
    cin >> size;

    if (size < 2)
    {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int numbers[size];

    // Taking array elements from user
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int secondLargest = numbers[0];

    // Finding largest and second largest elements
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest)
        {
            secondLargest = numbers[i];
        }
    }

    // Displaying result
    cout << "\nSecond largest element in the array is: "
         << secondLargest << endl;

    return 0;
}