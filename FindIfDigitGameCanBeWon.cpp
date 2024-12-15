#include <vector>
using namespace std;

class Solution
{
public:
    bool canAliceWin(vector<int> &nums)
    {
        int SingleDigit = 0;
        int DoubleDigit = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];

            if (num / 10 == 0)
                SingleDigit += num;
            else
                DoubleDigit += num;
        }
        if (SingleDigit == DoubleDigit)
            return false;

        return true;
    }
};