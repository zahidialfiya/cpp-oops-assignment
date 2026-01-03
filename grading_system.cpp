#include <iostream>
using namespace std;

int main()
{
    int marks;

    // Taking marks input from user
    cout << "Enter obtained marks (out of 100): ";
    cin >> marks;

    // Grading system using if-else
    if (marks >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}