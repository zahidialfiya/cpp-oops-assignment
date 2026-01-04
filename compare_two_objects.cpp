#include <iostream>
using namespace std;

class Compare
{
private:
    int value;

public:
    // Function to take input
    void getValue()
    {
        cout << "Enter value: ";
        cin >> value;
    }

    // Function to compare two objects
    void compare(Compare obj)
    {
        if (value > obj.value)
            cout << "First object is greater" << endl;
        else if (value < obj.value)
            cout << "Second object is greater" << endl;
        else
            cout << "Both objects are equal" << endl;
    }
};

int main()
{
    Compare obj1, obj2;

    cout << "For first object" << endl;
    obj1.getValue();

    cout << "For second object" << endl;
    obj2.getValue();

    obj1.compare(obj2);

    return 0;
}