class Solution
{
public:
    double myPow(double x, int n)
    {
        long binaryForm = n;
        double ans = 1;
        double tempAns = x;

        if (n == 0)
            return 1.0;
        if (x == 1)
            return 1.0;
        if (x == 0)
            return 0.0;

        if (x == -1 && n % 2 == 0)
            return 1.0;
        if (x == -1 && n % 2 != 0)
            return -1.0;

        if (n < 0)
        {
            tempAns = 1 / tempAns;
            binaryForm = -binaryForm;
        }

        while (binaryForm > 0)
        {

            if (binaryForm % 2 == 1)
            {
                ans *= tempAns;
            }

            tempAns *= tempAns;
            binaryForm /= 2;
        }

        return ans;
    }
};