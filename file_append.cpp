#include <iostream>
#include <fstream>   // for file handling
using namespace std;

int main()
{
    ofstream file;

    // Open file in append mode
    file.open("data.txt", ios::app);

    if (file.is_open())
    {
        file << "\nThis line is appended to the file.";

        cout << "Data appended successfully." << endl;

        file.close();   // Close file
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}