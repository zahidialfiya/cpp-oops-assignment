#include <iostream>
#include <new>   // for bad_alloc
using namespace std;

int main()
{
    try
    {
        int size;

        cout << "Enter number of elements: ";
        cin >> size;

        // Dynamic memory allocation
        int *arr = new int[size];

        cout << "Memory allocated successfully." << endl;

        // Initializing array
        for (int i = 0; i < size; i++)
        {
            arr[i] = i + 1;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;   // free memory
    }
    catch (bad_alloc &e)
    {
        cout << "Error: Memory allocation failed." << endl;
    }

    return 0;
}