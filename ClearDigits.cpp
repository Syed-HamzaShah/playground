#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    string clearDigits(string s)
    {
        stack<char> c;

        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                if (!c.empty())
                {
                    c.pop();
                }
                continue;
            }
            c.push(s[i]);
        }

        if (c.empty())
            return "";

        string ans = "";

        while (!c.empty())
        {
            ans = c.top() + ans;
            c.pop();
        }

        return ans;
    }
};