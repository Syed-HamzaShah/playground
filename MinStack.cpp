class MinStack
{
    stack<long long int> s;
    long long int minVal;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (s.empty())
        {
            s.push(val);
            minVal = val;
        }
        else
        {
            if (minVal > val)
            {
                s.push((long long)2 * val - minVal);
                minVal = val;
            }
            else
                s.push(val);
        }
    }

    void pop()
    {
        if (s.empty())
            return;

        if (minVal > s.top())
            minVal = (2 * minVal) - s.top();

        s.pop();
    }

    int top()
    {
        return s.top() < minVal ? minVal : s.top();
    }

    int getMin()
    {
        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */