class Solution
{
public:
    long long coloredCells(int N)
    {
        long long n = N;
        return (n * n) + ((n - 1) * (n - 1));
    }
};