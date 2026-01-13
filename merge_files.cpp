#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file1, file2;
    ofstream mergedFile;
    string line;

    // Open first file
    file1.open("file1.txt");
    if (!file1)
    {
        cout << "File1 not found." << endl;
        return 0;
    }

    // Open second file
    file2.open("file2.txt");
    if (!file2)
    {
        cout << "File2 not found." << endl;
        return 0;
    }

    // Open merged file
    mergedFile.open("merged.txt");

    // Copy content of file1
    while (getline(file1, line))
    {
        mergedFile << line << endl;
    }

    // Copy content of file2
    while (getline(file2, line))
    {
        mergedFile << line << endl;
    }

    file1.close();
    file2.close();
    mergedFile.close();

    cout << "Files merged successfully into merged.txt" << endl;

    return 0;
}