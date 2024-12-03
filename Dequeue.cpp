#include <iostream>
#include <deque>
using namespace std;

void enqueueFront(deque<int> &dq, int element)
{
    dq.push_front(element);
    cout << "Element " << element << " is added from front." << endl;
}

void enqueueBack(deque<int> &dq, int element)
{
    dq.push_back(element);
    cout << "Element " << element << " is added from back." << endl;
}

void dequeueBack(deque<int> &dq)
{
    if (!dq.empty())
    {
        cout << "Dequeued from back is " << dq.front() << endl;
        dq.pop_back();
    }
    else
        cout << "Dequeue is empty!" << endl;
}

void dequeueFront(deque<int> &dq)
{
    if (!dq.empty())
    {
        cout << "Dequeued from front is " << dq.front() << endl;
        dq.pop_front();
    }
    else
        cout << "Dequeue is empty!" << endl;
}

void display(deque<int> dq)
{
    if (dq.empty())
    {
        cout << "Dequeue is empty!" << endl;
        return;
    }
    else
    {
        cout << "Dequeue Elements : ";
        while (!dq.empty())
        {
            cout << dq.front() << ' ';
            dq.pop_front();
        }
        cout << endl;
    }
}

int main()
{
    deque<int> d;

    enqueueBack(d, 10);
    enqueueBack(d, 20);
    enqueueFront(d, 30);

    display(d);

    dequeueFront(d);
    display(d);

    dequeueBack(d);
    display(d);

    dequeueFront(d);
    dequeueBack(d);

    return 0;
}