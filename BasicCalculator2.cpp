class Solution
{
public:
    int calculate(string s)
    {
        stack<int> a;
        int num = 0;
        char sign = '+';

        for (int i = 0; i <= s.length(); i++)
        {
            char c = s[i];

            if (isdigit(c))
                num = num * 10 + (c - '0');

            if (!isdigit(c) && c != ' ')
            {
                if (sign == '+')
                    a.push(num);
                else if (sign == '-')
                    a.push(-num);
                else if (sign == '*')
                {
                    int temp = a.top();
                    a.pop();
                    a.push(temp * num);
                }
                else if (sign == '/')
                {
                    int temp = a.top();
                    a.pop();
                    a.push(temp / num);
                }
                sign = c;
                num = 0;
            }
        }

        int ans = 0;
        while (!a.empty())
        {
            ans += a.top();
            a.pop();
        }
        return ans;
    }
};