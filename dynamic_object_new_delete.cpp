#include <iostream>
using namespace std;

class Sample
{
private:
    int value;

public:
    // Constructor
    Sample(int v)
    {
        value = v;
        cout << "Object created. Value = " << value << endl;
    }

    // Destructor
    ~Sample()
    {
        cout << "Object destroyed." << endl;
    }

    void display()
    {
        cout << "Value is: " << value << endl;
    }
};

int main()
{
    // Dynamic object creation
    Sample* obj = new Sample(100);

    obj->display();

    // Dynamic object deletion
    delete obj;

    return 0;
}