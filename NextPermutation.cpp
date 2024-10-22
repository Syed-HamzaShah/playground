#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int pivot = -1;
        int size = nums.size();

        for (int i = size - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                pivot = i;
                break;
            }
        }

        if (pivot == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = size - 1; i > pivot; i--)
        {
            if (nums[i] > nums[pivot])
            {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        int i = pivot + 1;
        int j = size - 1;
        while (i <= j)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};