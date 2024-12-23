#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int high = INT_MAX;
        int low = INT_MIN;
        int size = nums.size() - 1;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = size;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > target)
                {
                    high = min(high, sum);
                    k--;
                }
                else if (sum < target)
                {
                    low = max(low, sum);
                    j++;
                }
            }
        }
        if ((high - target) > (target - low))
            return low;

        return high;
    }
};