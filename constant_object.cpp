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
    }

    // Constant member function
    void display() const
    {
        cout << "Value is: " << value << endl;
    }
};

int main()
{
    // Creating constant object
    const Sample obj(50);

    // Only const member function can be called
    obj.display();

    return 0;
}