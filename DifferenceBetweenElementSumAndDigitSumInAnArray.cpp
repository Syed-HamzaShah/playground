#include <vector>
using namespace std;

class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int elementSum = 0;
        int digitSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            elementSum += nums[i];
            int num = nums[i];

            while (num != 0)
            {
                int n = num % 10;
                digitSum += n;
                num /= 10;
            }
        }
        unsigned int sum = elementSum - digitSum;
        return sum;
    }
};