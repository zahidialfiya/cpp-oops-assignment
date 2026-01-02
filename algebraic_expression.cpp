#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int result;

    // Taking input values
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    cout << "Enter value of d: ";
    cin >> d;

    // Evaluating algebraic expression
    result = (a + b) * c - d;

    // Displaying result
    cout << "\nResult of the expression (a + b) * c - d = " << result << endl;

    return 0;
}