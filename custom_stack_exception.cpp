#include <iostream>
using namespace std;

// Custom exception classes
class StackOverflow
{
public:
    const char* message() const
    {
        return "Stack Overflow: Cannot push element, stack is full.";
    }
};

class StackUnderflow
{
public:
    const char* message() const
    {
        return "Stack Underflow: Cannot pop element, stack is empty.";
    }
};

// Stack class
class Stack
{
    int arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == 4)
        {
            throw StackOverflow();   // custom exception
        }
        arr[++top] = value;
        cout << "Pushed: " << value << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            throw StackUnderflow();  // custom exception
        }
        cout << "Popped: " << arr[top--] << endl;
    }
};

int main()
{
    Stack s;

    try
    {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);   // causes stack overflow
    }
    catch (StackOverflow &e)
    {
        cout << e.message() << endl;
    }

    try
    {
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();      // causes stack underflow
    }
    catch (StackUnderflow &e)
    {
        cout << e.message() << endl;
    }

    return 0;
}