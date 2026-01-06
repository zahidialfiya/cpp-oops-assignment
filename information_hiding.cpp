#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;   // hidden data (information hiding)

public:
    // Constructor
    BankAccount(int b)
    {
        balance = b;
    }

    // Function to deposit money
    void deposit(int amount)
    {
        balance = balance + amount;
    }

    // Function to show balance
    void showBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(1000);

    account.deposit(500);      // accessing data through function
    account.showBalance();

    // Direct access to balance is not allowed
    // account.balance = 2000;   // This will cause error

    return 0;
}