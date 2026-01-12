#include <iostream>
#include <fstream>   // for file handling
using namespace std;

int main()
{
    ofstream file;

    // Open file in write mode
    file.open("data.txt");

    if (file.is_open())
    {
        file << "Name: Rahul\n";
        file << "Course: C++ Programming\n";
        file << "Marks: 85\n";

        cout << "Data written to file successfully." << endl;

        file.close();   // Close file
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}