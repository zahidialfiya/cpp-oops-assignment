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

        // Attempt to allocate memory
        int *arr = new int[size];   // may throw bad_alloc

        cout << "Memory allocated successfully." << endl;

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
        cout << "Error: Memory allocation failed (bad_alloc caught)." << endl;
    }

    return 0;
}