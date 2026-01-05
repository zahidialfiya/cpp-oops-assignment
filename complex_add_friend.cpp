#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Constructor to initialize values
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Declaring friend function
    friend Complex addComplex(Complex c1, Complex c2);

    // Function to display complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function to add two complex numbers
Complex addComplex(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);

    Complex result = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}