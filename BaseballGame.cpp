#include <string>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    int add(stack<int> record)
    {
        int one = record.top();
        record.pop();
        int two = record.top();
        return one + two;
    }

    int calPoints(vector<string> &operations)
    {
        stack<int> record;
        int temp = 0;

        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "C")
                record.pop();
            else if (operations[i] == "D")
                record.push(record.top() * 2);
            else if (operations[i] == "+")
                record.push(add(record));
            else
            {
                int ans = stoi(operations[i]);
                record.push(ans);
            }
        }

        while (!record.empty())
        {
            temp += record.top();
            record.pop();
        }
        return temp;
    }
};