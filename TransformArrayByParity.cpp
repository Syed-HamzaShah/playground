#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;

        while (i <= j)
        {
            if (nums[i] % 2 == 0 && nums[j] % 2 == 1)
            {
                nums[i] = 0;
                nums[j] = 1;
                i++, j--;
            }
            else if (nums[i] % 2 == 0 && nums[j] % 2 == 0)
            {
                nums[i] = 0;
                i++;
            }
            else if (nums[i] % 2 == 1 && nums[j] % 2 == 1)
            {
                nums[j] = 1;
                j--;
            }
            else
            {
                nums[i] = 0;
                nums[j] = 1;
                i++, j--;
            }
        }

        return nums;
    }
};