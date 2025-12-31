#include <iostream>
using namespace std;

int main()
{
    float principalAmount, rateOfInterest, timeInYears;
    float simpleInterest;

    // Taking input from user
    cout << "Enter principal amount: ";
    cin >> principalAmount;

    cout << "Enter rate of interest: ";
    cin >> rateOfInterest;

    cout << "Enter time (in years): ";
    cin >> timeInYears;

    // Calculating simple interest
    simpleInterest = (principalAmount * rateOfInterest * timeInYears) / 100;

    // Displaying the result
    cout << "\nSimple Interest = " << simpleInterest << endl;

    return 0;
}