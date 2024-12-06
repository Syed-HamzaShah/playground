#include <iostream>
using namespace std;

void push(int stack[], int &top, int max, int value)
{
    if (top == max + 1)
        cout << "Stack Overflow!" << endl;
    else
    {
        top++;
        stack[top] = value;
        cout << value << " Pushed!" << endl;
    }
}

void pop(int stack[], int &top)
{
    if (top == -1)
        cout << "Stack Underflow!" << endl;
    else
    {
        cout << stack[top] << " Poped!" << endl;
        top--;
    }
}

void display(int stack[], int &top)
{
    if (top == -1)
        cout << "Stack is empty!" << endl;
    else
    {
        for (int i = top; i >= 0; i--)
            cout << stack[i] << ' ';
        cout << endl;
    }
}

int main()
{
    int max = 5;
    int stack[max];
    int top = -1;

    display(stack, top);
    push(stack, top, max, 13);
    push(stack, top, max, 12);
    pop(stack, top);
    display(stack, top);

    push(stack, top, max, 122);
    push(stack, top, max, 121);
    pop(stack, top);
    display(stack, top);

    return 0;
}