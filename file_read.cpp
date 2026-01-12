#include <iostream>
#include <fstream>   // for file handling
using namespace std;

int main()
{
    ifstream file;
    string line;

    // Open file in read mode
    file.open("data.txt");

    if (file.is_open())
    {
        cout << "File Content:\n\n";

        // Read file line by line
        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();   // Close file
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}