#include <iostream>
#include <string>
using namespace std;

// Custom exception class
class LoginError
{
public:
    string message;

    LoginError(string msg)
    {
        message = msg;
    }
};

class LoginSystem
{
    string correctUsername;
    string correctPassword;

public:
    LoginSystem()
    {
        correctUsername = "admin";
        correctPassword = "1234";
    }

    void login(string username, string password)
    {
        if (username != correctUsername)
        {
            throw LoginError("Invalid username.");
        }

        if (password != correctPassword)
        {
            throw LoginError("Invalid password.");
        }

        cout << "Login successful. Welcome!" << endl;
    }
};

int main()
{
    string username, password;
    LoginSystem system;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    try
    {
        system.login(username, password);
    }
    catch (LoginError &e)
    {
        cout << "Login Failed: " << e.message << endl;
    }

    return 0;
}