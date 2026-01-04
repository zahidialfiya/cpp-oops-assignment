#include <iostream>
using namespace std;

int main()
{
    int rows1, columns1, rows2, columns2;

    // Taking size of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> columns1;

    // Taking size of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> columns2;

    // Checking multiplication condition
    if (columns1 != rows2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    int matrix1[rows1][columns1];
    int matrix2[rows2][columns2];
    int product[rows1][columns2];

    // Input first matrix
    cout << "\nEnter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Initializing product matrix with 0
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            for (int k = 0; k < columns1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying result
    cout << "\nProduct of the matrices:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}