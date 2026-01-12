#include <iostream>
#include <fstream>   // for file handling
using namespace std;

int main()
{
    ofstream file;   // object for file output

    // Creating and opening a file
    file.open("sample.txt");

    if (file.is_open())
    {
        cout << "File created successfully." << endl;
        file << "This file is created using C++ file handling.";
        file.close();   // closing the file
    }
    else
    {
        cout << "File creation failed." << endl;
    }

    return 0;
}