class Solution
{
public:
    int calculate(string s)
    {
        stack<int> m;
        int prev = 0;
        int curr = 0;
        int sign = 1;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];

            if (isdigit(c))
            {
                curr = curr * 10 + (c - '0');
            }

            if (!isdigit(c) && c != ' ' || i == s.length() - 1)
            {
                if (c == '+' || c == '-')
                {
                    prev += (curr * sign);
                    curr = 0;
                    sign = (c == '+') ? 1 : -1;
                }
                else if (c == '(')
                {
                    m.push(prev);
                    m.push(sign);
                    prev = 0;
                    sign = 1;
                }
                else if (c == ')')
                {
                    prev += (curr * sign);
                    curr = 0;

                    int lastSign = m.top();
                    m.pop();
                    int lastPrev = m.top();
                    m.pop();

                    prev = lastPrev + lastSign * prev;
                }
            }
        }

        return prev + (curr * sign);
    }
};
