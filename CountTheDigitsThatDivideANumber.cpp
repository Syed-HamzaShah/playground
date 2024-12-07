class Solution
{
public:
    int countDigits(int num)
    {
        int original = num;
        int ans = 0;
        while (num != 0)
        {
            int n = num % 10;
            if (original % n == 0 && n != 0)
                ans++;
            num /= 10;
        }
        return ans;
    }
};