#include <iostream>
using namespace std;

int main()
{
    float celsiusTemperature, fahrenheitTemperature;

    // Taking temperature in Celsius from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsiusTemperature;

    // Converting Celsius to Fahrenheit
    fahrenheitTemperature = (celsiusTemperature * 9 / 5) + 32;

    // Displaying the result
    cout << "\nTemperature in Fahrenheit: " << fahrenheitTemperature << endl;

    return 0;
}