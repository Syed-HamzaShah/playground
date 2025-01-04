#include <vector>
using namespace std;

class MyCircularDeque
{
    int size = 0;
    vector<int> q;
    int front = -1;
    int rear = -1;

public:
    MyCircularDeque(int k)
    {
        size = k;
        q.resize(k);
    }

    bool insertFront(int value)
    {
        if (isFull())
            return false;

        if (front == -1)
        {
            front = 0;
            rear = 0;
            q[front] = value;
            return true;
        }
        else if (front == 0 && rear < size - 1)
        {
            front = size - 1;
            q[front] = value;
            return true;
        }
        else
        {
            front--;
            q[front] = value;
        }
        return true;
    }

    bool insertLast(int value)
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

    bool deleteFront()
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

    bool deleteLast()
    {
        if (isEmpty())
            return false;

        if (rear == 0 && front != rear)
        {
            rear = size - 1;
            return true;
        }
        else if (rear == front)
        {
            front = -1;
            rear = -1;
            return true;
        }
        else
            rear--;

        return true;
    }

    int getFront()
    {
        if (front == -1)
            return -1;

        return q[front];
    }

    int getRear()
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
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */