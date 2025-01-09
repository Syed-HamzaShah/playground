#include <queue>
using namespace std;

class MyStack
{
    queue<int> q;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
        return;
    }

    int pop()
    {
        if (q.size() == 1)
        {
            int t = q.front();
            q.pop();
            return t;
        }
        else
        {
            for (int i = 0; i < q.size() - 1; i++)
            {
                int temp;
                temp = q.front();
                q.pop();
                q.push(temp);
            }
            int t = q.front();
            q.pop();
            return t;
        }
    }

    int top()
    {
        if (q.size() == 1)
            return q.front();
        else
        {
            for (int i = 0; i < q.size() - 1; i++)
            {
                int temp;
                temp = q.front();
                q.pop();
                q.push(temp);
            }
            int t = q.front();
            q.pop();
            q.push(t);
            return t;
        }
    }

    bool empty()
    {
        if (q.empty())
            return true;

        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */