#include <iostream>
#include <fstream>   // for file handling
using namespace std;

int main()
{
    ifstream sourceFile;
    ofstream destinationFile;
    string line;

    // Open source file in read mode
    sourceFile.open("source.txt");

    // Open destination file in write mode
    destinationFile.open("destination.txt");

    if (sourceFile.is_open() && destinationFile.is_open())
    {
        // Copy content line by line
        while (getline(sourceFile, line))
        {
            destinationFile << line << endl;
        }

        cout << "File content copied successfully." << endl;

        sourceFile.close();
        destinationFile.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}