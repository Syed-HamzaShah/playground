class Solution
{
public:
    int hammingWeight(int n)
    {
        int ans = 0;

        while (n != 0)
        {
            int num = n % 2;

            if (num == 1)
                ans++;

            n = n / 2;
        }

        return ans;
    }
};