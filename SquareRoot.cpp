class Solution
{
public:
    int mySqrt(int x)
    {
        int ans = 0, start = 1, end = x;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (mid > x / mid)
                end = mid - 1;

            else if (mid < x / mid)
            {
                start = mid + 1;
                ans = mid;
            }

            else
                return mid;
        }
        return ans;
    }
};