#include <iostream>
using namespace std;

// Product class
class Product
{
private:
    int productId;
    string productName;
    float price;

public:
    void setProduct(int id, string name, float p)
    {
        productId = id;
        productName = name;
        price = p;
    }

    float getPrice()
    {
        return price;
    }

    void display()
    {
        cout << productId << "\t" << productName << "\t" << price << endl;
    }
};

// ShoppingCart class
class ShoppingCart
{
private:
    Product products[10];
    int count;

public:
    ShoppingCart()
    {
        count = 0;
    }

    void addProduct(Product p)
    {
        products[count] = p;
        count++;
    }

    void showCart()
    {
        cout << "\nProduct ID\tName\tPrice\n";
        for (int i = 0; i < count; i++)
        {
            products[i].display();
        }
    }

    float calculateTotal()
    {
        float total = 0;
        for (int i = 0; i < count; i++)
        {
            total += products[i].getPrice();
        }
        return total;
    }
};

int main()
{
    ShoppingCart cart;
    Product p1, p2;

    p1.setProduct(101, "Mobile", 15000);
    p2.setProduct(102, "Headphones", 2000);

    cart.addProduct(p1);
    cart.addProduct(p2);

    cart.showCart();

    cout << "\nTotal Amount: " << cart.calculateTotal() << endl;

    return 0;
}