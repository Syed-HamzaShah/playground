#include <vector>
using namespace std;

class Solution
{
public:
    bool isValid(vector<int> &nums, int k, int maxAllowed)
    {
        int students = 1;
        int pages = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxAllowed)
                return false;

            if (pages + nums[i] <= maxAllowed)
            {
                pages += nums[i];
            }
            else
            {
                students++;
                pages = nums[i];
            }
        }
        return students > k ? false : true;
    }

    int splitArray(vector<int> &nums, int k)
    {
        if (k > nums.size())
            return -1;

        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        int ans = -1;
        int start = 0;
        int end = sum;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isValid(nums, k, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};