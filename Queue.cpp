#include <iostream>
#include <queue>
using namespace std;

void en_queue(queue<int> &q, int value)
{
    q.push(value);
    cout << "Value " << value << " is added to the Queue." << endl;
}

void de_queue(queue<int> &q)
{
    if (!q.empty())
        cout << "The Queue is Empty!" << endl;
    else
    {
        cout << "Value Poped is " << q.front() << endl;
        q.pop();
    }
}

void display(queue<int> q)
{
    if (!q.empty())
        cout << "Queue is empty!" << endl;
    else
    {
        while (!q.empty())
        {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << endl;
    }
}

int main()
{
    queue<int> q;

    en_queue(q, 10);
    en_queue(q, 20);
    en_queue(q, 30);

    display(q);

    de_queue(q);
    de_queue(q);

    return 0;
}