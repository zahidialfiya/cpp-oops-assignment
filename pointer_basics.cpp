#include <iostream>
using namespace std;

int main()
{
    int num = 10;       // normal integer variable
    int *ptr = &num;    // pointer variable storing address of num

    // Displaying the value and address
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    // Modifying value using pointer
    *ptr = 20;
    cout << "\nAfter changing value using pointer:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}