#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // cin and cout belong to iostream hierarchy
    cout << "Demonstrating stream class hierarchy" << endl;

    // ofstream object (derived from ostream)
    ofstream outFile("example.txt");
    outFile << "This line is written using ofstream." << endl;
    outFile.close();

    // ifstream object (derived from istream)
    ifstream inFile("example.txt");
    string line;

    cout << "\nReading from file using ifstream:\n";
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}