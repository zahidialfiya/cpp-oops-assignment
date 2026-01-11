#include <iostream>
using namespace std;

// Class for Customer Billing System
class Customer
{
private:
    int customerId;
    string customerName;
    int quantity;
    float pricePerItem;
    float totalBill;

public:
    // Function to input customer and purchase details
    void inputDetails()
    {
        cout << "Enter Customer ID: ";
        cin >> customerId;

        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Quantity of Items: ";
        cin >> quantity;

        cout << "Enter Price per Item: ";
        cin >> pricePerItem;
    }

    // Function to calculate bill
    void calculateBill()
    {
        totalBill = quantity * pricePerItem;
    }

    // Function to display bill
    void displayBill()
    {
        cout << "\n--- Customer Bill ---" << endl;
        cout << "Customer ID: " << customerId << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per Item: " << pricePerItem << endl;
        cout << "Total Bill Amount: " << totalBill << endl;
    }
};

int main()
{
    Customer cust;

    cust.inputDetails();
    cust.calculateBill();
    cust.displayBill();

    return 0;
}