class Solution
{
public:
    int getSum(int a, int b)
    {
        unsigned int carry = a & b;
        int ans = a ^ b;
        int tempCarry = carry << 1;

        while (carry != 0)
        {
            carry = ans & tempCarry;
            ans = ans ^ tempCarry;
            tempCarry = carry << 1;
        }
        return ans;
    }
};