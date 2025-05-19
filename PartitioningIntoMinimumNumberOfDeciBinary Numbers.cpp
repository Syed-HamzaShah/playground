class Solution
{
public:
    int minPartitions(string n)
    {
        int m = INT_MIN;
        for (int i = 0; i < n.length(); i++)
            m = max(n[i] - '0', m);

        return m;
    }
};