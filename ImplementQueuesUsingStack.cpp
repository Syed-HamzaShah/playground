#include <stack>
using namespace std;

class MyQueue
{
    stack<int> s;
    int pointer;

public:
    MyQueue()
    {
        pointer = 0;
    }

    void push(int x)
    {
        s.push(x);
        return;
    }

    int pop()
    {
        stack<int> temp = s;

        for (int i = 0; i < s.size() - 1 - pointer; i++)
        {
            temp.pop();
        }
        pointer++;
        return temp.top();
    }

    int peek()
    {
        stack<int> temp = s;

        for (int i = 0; i < s.size() - 1 - pointer; i++)
        {
            temp.pop();
        }
        return temp.top();
    }

    bool empty()
    {
        if (s.empty())
            return true;
        else if (!s.empty() && s.size() - pointer == 0)
            return true;

        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */