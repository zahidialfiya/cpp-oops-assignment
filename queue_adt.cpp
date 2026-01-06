#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear;
    int arr[5];   // queue size = 5

public:
    // Constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value)
    {
        if (rear == 4)
        {
            cout << "Queue Overflow" << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << value << " inserted into queue" << endl;
        }
    }

    // Dequeue operation
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
        }
        else
        {
            cout << arr[front] << " removed from queue" << endl;
            front++;
        }
    }

    // Display queue elements
    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}