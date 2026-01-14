#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string filename;

    cout << "Enter file name to open: ";
    cin >> filename;

    try
    {
        file.open(filename, ios::in);

        if (!file)
        {
            throw "File cannot be opened";
        }

        cout << "File opened successfully." << endl;
        cout << "File contents:" << endl;

        char ch;
        while (file.get(ch))
        {
            cout << ch;
        }

        file.close();
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}