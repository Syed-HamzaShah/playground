class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int ans = start;
        int element = 0;
        for (int i = 1; i < n; i++)
        {
            element = start + 2 * i;
            ans ^= element;
        }
        return ans;
    }
};