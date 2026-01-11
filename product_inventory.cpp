#include <iostream>
using namespace std;

class Product
{
private:
    int productId;
    string productName;
    int quantity;
    float price;

public:
    // Function to input product details
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display product details
    void display()
    {
        cout << "\nProduct Details:";
        cout << "\nProduct ID: " << productId;
        cout << "\nProduct Name: " << productName;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price;
        cout << "\nTotal Value: " << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();

    return 0;
}