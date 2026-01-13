#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream inputFile("data.txt");
    ofstream file1("part1.txt");
    ofstream file2("part2.txt");

    vector<string> lines;
    string line;

    if (!inputFile)
    {
        cout << "Source file not found." << endl;
        return 0;
    }

    // Read all lines from file
    while (getline(inputFile, line))
    {
        lines.push_back(line);
    }

    int totalLines = lines.size();
    int mid = totalLines / 2;

    // Write first half to part1.txt
    for (int i = 0; i < mid; i++)
    {
        file1 << lines[i] << endl;
    }

    // Write second half to part2.txt
    for (int i = mid; i < totalLines; i++)
    {
        file2 << lines[i] << endl;
    }

    inputFile.close();
    file1.close();
    file2.close();

    cout << "File split successfully into part1.txt and part2.txt" << endl;

    return 0;
}