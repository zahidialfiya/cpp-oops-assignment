#include <iostream>
using namespace std;

class ObjectCount
{
private:
    static int count;   // static data member

public:
    // Constructor increases count when object is created
    ObjectCount()
    {
        count++;
    }

    // Function to display object count
    static void showCount()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

// Initialization of static variable
int ObjectCount::count = 0;

int main()
{
    ObjectCount obj1;
    ObjectCount obj2;
    ObjectCount obj3;

    ObjectCount::showCount();   // calling static function

    return 0;
}