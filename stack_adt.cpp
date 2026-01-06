#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];   // stack size = 5

public:
    // Constructor
    Stack()
    {
        top = -1;
    }

    // Push operation
    void push(int value)
    {
        if (top == 4)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack" << endl;
        }
    }

    // Pop operation
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << arr[top] << " popped from stack" << endl;
            top--;
        }
    }

    // Display stack elements
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.display();

    return 0;
}