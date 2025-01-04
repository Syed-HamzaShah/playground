#include <vector>
using namespace std;

class MyCircularQueue
{
    int size = 0;
    vector<int> q;
    int front = -1;
    int rear = -1;

public:
    MyCircularQueue(int k)
    {
        size = k;
        q.resize(k);
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;

        if (front == -1)
        {
            front = 0;
            rear = 0;
            q[rear] = value;
            return true;
        }
        else if (rear == size - 1 && front > 0)
        {
            rear = 0;
            q[rear] = value;
            return true;
        }
        else
        {
            rear++;
            q[rear] = value;
        }

        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;

        if (front == rear)
        {
            front = -1;
            rear = -1;
            return true;
        }
        else if (front == size - 1)
        {
            front = 0;
            return true;
        }
        else
            front++;

        return true;
    }

    int Front()
    {
        if (front == -1)
            return -1;

        return q[front];
    }

    int Rear()
    {
        if (rear == -1)
            return -1;

        return q[rear];
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;

        return false;
    }

    bool isFull()
    {
        if (rear == size - 1 && front == 0)
            return true;
        else if (rear + 1 == front)
            return true;

        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */