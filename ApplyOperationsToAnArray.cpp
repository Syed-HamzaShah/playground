class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            if (i < nums.size() - 1 && nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                i++;
                nums[i] = 0;
            }
        }

        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[j], nums[i]);
                j++;
            }
        }

        return nums;
    }
};