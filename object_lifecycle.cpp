#include <iostream>
using namespace std;

class Demo
{
public:
    // Constructor
    Demo()
    {
        cout << "Constructor called: Object created" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor called: Object destroyed" << endl;
    }

    void show()
    {
        cout << "Member function executed" << endl;
    }
};

int main()
{
    cout << "Inside main function" << endl;

    Demo obj;    // Object created here

    obj.show();

    cout << "Exiting main function" << endl;

    return 0;   // Object destroyed here
}