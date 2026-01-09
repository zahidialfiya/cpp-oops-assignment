#include <iostream>
using namespace std;

// Class for Library
class Library
{
private:
    int bookId;
    string bookName;
    string authorName;
    bool isIssued;

public:
    // Function to add book details
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin >> bookName;

        cout << "Enter Author Name: ";
        cin >> authorName;

        isIssued = false;
        cout << "Book added successfully." << endl;
    }

    // Function to issue book
    void issueBook()
    {
        if (!isIssued)
        {
            isIssued = true;
            cout << "Book issued successfully." << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    // Function to return book
    void returnBook()
    {
        if (isIssued)
        {
            isIssued = false;
            cout << "Book returned successfully." << endl;
        }
        else
        {
            cout << "Book was not issued." << endl;
        }
    }

    // Function to display book details
    void displayBook()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author Name: " << authorName << endl;

        if (isIssued)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    Library lib;
    int choice;

    do
    {
        cout << "\n--- Library Management Menu ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Issue Book" << endl;
        cout << "3. Return Book" << endl;
        cout << "4. Display Book Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            lib.addBook();
            break;

        case 2:
            lib.issueBook();
            break;

        case 3:
            lib.returnBook();
            break;

        case 4:
            lib.displayBook();
            break;

        case 5:
            cout << "Exiting Library Management System." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}