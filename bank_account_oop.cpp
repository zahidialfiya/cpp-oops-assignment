#include <iostream>
using namespace std;

// Class representing a Bank Account
class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    // Function to create account
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> accountHolderName;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw money
    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to display account details
    void displayAccount()
    {
        cout << "\nAccount Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.createAccount();

    do
    {
        cout << "\n--- Bank Menu ---" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.deposit();
            break;

        case 2:
            account.withdraw();
            break;

        case 3:
            account.displayAccount();
            break;

        case 4:
            cout << "Thank you for using the bank system." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}