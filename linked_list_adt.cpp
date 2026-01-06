#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
private:
    Node* head;

public:
    // Constructor
    LinkedList()
    {
        head = NULL;
    }

    // Insert at beginning
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Display linked list
    void display()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty" << endl;
        }
        else
        {
            Node* temp = head;
            cout << "Linked List elements: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();

    return 0;
}