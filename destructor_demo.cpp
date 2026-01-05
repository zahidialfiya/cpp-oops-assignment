#include <iostream>
using namespace std;

class Sample
{
public:
    // Constructor
    Sample()
    {
        cout << "Object created (Constructor called)" << endl;
    }

    // Destructor
    ~Sample()
    {
        cout << "Object destroyed (Destructor called)" << endl;
    }
};

int main()
{
    cout << "Entering main function" << endl;

    Sample obj1;   // Object creation

    cout << "Inside main function" << endl;

    return 0;      // Object destroyed automatically here
}