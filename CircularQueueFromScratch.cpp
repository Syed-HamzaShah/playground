#include <iostream>
using namespace std;

void push(int queue[], int &left, int &right, int max, int value)
{
    if (left == 0 && right == max - 1 || left == right + 1)
        cout << "Queue is full!" << endl;
    else if (left == -1 && right == -1)
    {
        left++, right++;
        queue[right] = value;
        cout << "Value Added!" << endl;
    }
    else if (right == max - 1 && left > 0)
    {
        right = 0;
        queue[right] = value;
        cout << "Value Added!" << endl;
    }
    else
    {
        right++;
        queue[right] = value;
        cout << "Value Added!" << endl;
    }
}
void pop(int queue[], int &left, int &right, int max)
{
    if (left < 0)
        cout << "Queue is empty!" << endl;
    else if (left == right)
    {
        left = -1, right = -1;
        cout << "Value Poped!" << endl;
    }
    else if (left == max - 1 && right > 0)
    {
        cout << "Value Poped!" << endl;
        left = 0;
    }
    else
    {
        left++;
        cout << "Value Poped!" << endl;
    }
}
void display(int queue[], int left, int right)
{
    for (int i = 0; i < 7; i++)
        cout << queue[i] << ' ';
    cout << endl;
}

int main()
{
    int max = 7;
    int queue[max];
    int left = -1;
    int right = -1;

    push(queue, left, right, max, 10);
    push(queue, left, right, max, 20);
    display(queue, left, right);
    pop(queue, left, right, max);
    display(queue, left, right);

    return 0;
}