#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    string line;

    // Open file in read mode
    file.open("data.txt");

    if (!file)
    {
        cout << "File not found." << endl;
        return 0;
    }

    cout << "File content:\n";

    // Read until End Of File (EOF)
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}