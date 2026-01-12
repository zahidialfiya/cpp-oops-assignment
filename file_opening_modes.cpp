#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 1. Write mode (ios::out)
    ofstream writeFile;
    writeFile.open("modes.txt", ios::out);
    writeFile << "This line is written using ios::out mode.\n";
    writeFile.close();

    // 2. Append mode (ios::app)
    ofstream appendFile;
    appendFile.open("modes.txt", ios::app);
    appendFile << "This line is appended using ios::app mode.\n";
    appendFile.close();

    // 3. Read mode (ios::in)
    ifstream readFile;
    string line;
    readFile.open("modes.txt", ios::in);

    cout << "File Content:\n";
    while (getline(readFile, line))
    {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}