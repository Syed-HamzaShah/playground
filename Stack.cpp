#include <iostream>
using namespace std;

const int MAX = 5;

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow!" << value << endl;
    }
    else
    {
        stack[++top] = value;
        cout << value << " Pushed!" << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << stack[top--] << " Popped!" << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    push(40);
    push(50);
    push(60);
    display();

    pop();
    pop();
    display();

    return 0;
}