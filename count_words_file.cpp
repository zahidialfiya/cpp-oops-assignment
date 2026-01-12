#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    string word;
    int count = 0;

    // Open file in read mode
    file.open("data.txt");

    if (file.is_open())
    {
        // Read word by word
        while (file >> word)
        {
            count++;
        }

        cout << "Total number of words in file: " << count << endl;

        file.close();
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}