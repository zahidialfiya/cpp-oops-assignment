#include <iostream>
using namespace std;

int main()
{
    // Declaring a constant variable
    const int maximumMarks = 100;

    int obtainedMarks;

    // Taking input from user
    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    // Displaying values
    cout << "\nMaximum Marks (constant): " << maximumMarks << endl;
    cout << "Obtained Marks: " << obtainedMarks << endl;

    // maximumMarks = 120;  
    // This line will give an error because maximumMarks is constant

    return 0;
}