#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter array index (0 to 4): ";
    cin >> index;

    try
    {
        if (index < 0 || index >= 5)
        {
            throw index;   // throwing index as exception
        }

        cout << "Value at index " << index << " is " << arr[index] << endl;
    }
    catch (int)
    {
        cout << "Error: Array index out of bounds." << endl;
    }

    return 0;
}