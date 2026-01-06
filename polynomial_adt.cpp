#include <iostream>
using namespace std;

// Structure to store each term of polynomial
struct Term
{
    int coeff;
    int power;
};

class Polynomial
{
private:
    Term terms[5];   // maximum 5 terms
    int count;

public:
    // Constructor
    Polynomial()
    {
        count = 0;
    }

    // Function to add a term
    void addTerm(int c, int p)
    {
        terms[count].coeff = c;
        terms[count].power = p;
        count++;
    }

    // Function to display polynomial
    void display()
    {
        cout << "Polynomial: ";
        for (int i = 0; i < count; i++)
        {
            cout << terms[i].coeff << "x^" << terms[i].power;
            if (i != count - 1)
            {
                cout << " + ";
            }
        }
        cout << endl;
    }
};

int main()
{
    Polynomial p;

    p.addTerm(3, 2);   // 3x^2
    p.addTerm(5, 1);   // 5x^1
    p.addTerm(2, 0);   // 2x^0

    p.display();

    return 0;
}