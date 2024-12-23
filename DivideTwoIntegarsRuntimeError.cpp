class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        int ans = 0;
        bool negative = false;

        if (dividend < 0 || divisor < 0)
        {
            negative = true;
            if (dividend < 0)
                dividend *= -1;
            else
                divisor *= -1;
        }
        else if (dividend < 0 && divisor < 0)
        {
            negative = false;
            dividend = dividend * -1;
            divisor = divisor * -1;
        }
        else
            negative = false;

        while (dividend >= divisor)
        {
            dividend = dividend - divisor;
            ans++;
        }

        if (negative)
            return ans * -1;
        else
            return ans;
    }
};