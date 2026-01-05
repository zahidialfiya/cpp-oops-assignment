#include <iostream>
using namespace std;

class Sample
{
private:
    int number;   // private data member

public:
    // Constructor to initialize value
    Sample(int n)
    {
        number = n;
    }

    // Declaring friend function
    friend void showValue(Sample obj);
};

// Friend function definition
void showValue(Sample obj)
{
    // Accessing private data member
    cout << "Value of number: " << obj.number << endl;
}

int main()
{
    Sample s1(50);   // Object creation

    showValue(s1);   // Calling friend function

    return 0;
}