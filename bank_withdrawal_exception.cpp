#include <iostream>
using namespace std;

// Custom exception class
class InsufficientBalance
{
public:
    const char* message() const
    {
        return "Error: Insufficient balance for withdrawal.";
    }
};

class BankAccount
{
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            throw InsufficientBalance();   // throw custom exception
        }

        balance -= amount;
        cout << "Withdrawal successful." << endl;
        cout << "Remaining balance: " << balance << endl;
    }
};

int main()
{
    int initialBalance, withdrawAmount;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;

    BankAccount account(initialBalance);

    try
    {
        account.withdraw(withdrawAmount);
    }
    catch (InsufficientBalance &e)
    {
        cout << e.message() << endl;
    }

    return 0;
}