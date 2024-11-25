class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        long long product = 1;
        int sum = 0;

        while (n != 0)
        {
            int num = n % 10;
            product *= num;
            sum += num;
            n /= 10;
        }
        return product - sum;
    }
};