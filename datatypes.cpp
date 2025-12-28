#include <iostream>
using namespace std;

int main()
{
    // Declaring variables of different data types
    int age = 20;
    float height = 5.8;
    double salary = 25000.50;
    char grade = 'A';
    bool isStudent = true;

    // Printing values and their sizes
    cout << "Integer value (age): " << age << endl;
    cout << "Size of int: " << sizeof(age) << " bytes" << endl;

    cout << "\nFloat value (height): " << height << endl;
    cout << "Size of float: " << sizeof(height) << " bytes" << endl;

    cout << "\nDouble value (salary): " << salary << endl;
    cout << "Size of double: " << sizeof(salary) << " bytes" << endl;

    cout << "\nCharacter value (grade): " << grade << endl;
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;

    cout << "\nBoolean value (isStudent): " << isStudent << endl;
    cout << "Size of bool: " << sizeof(isStudent) << " bytes" << endl;

    return 0;
}