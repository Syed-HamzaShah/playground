#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int closest = INT_MAX;
        int result = 0;
        int size = nums.size() - 1;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size - 1; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = size;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if (abs(target - sum) < closest)
                {
                    closest = abs(target - sum);
                    result = sum;
                }

                if (sum > target)
                    k--;
                else if (sum < target)
                    j++;
                else
                    return target;
            }
        }

        return result;
    }
};