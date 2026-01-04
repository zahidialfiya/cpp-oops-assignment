#include <iostream>
using namespace std;

// Outer class
class Outer
{
private:
    int outerValue;

public:
    // Nested (inner) class
    class Inner
    {
    public:
        void show()
        {
            cout << "This is inside Inner class" << endl;
        }
    };

    // Function of outer class
    void getValue()
    {
        outerValue = 50;
        cout << "Outer class value: " << outerValue << endl;
    }
};

int main()
{
    Outer outerObj;          // Object of outer class
    Outer::Inner innerObj;   // Object of inner class

    outerObj.getValue();
    innerObj.show();

    return 0;
}