class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int count = 0;
        if (nums.size() == 1)
            return count;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                int temp = nums[i - 1] - nums[i];
                temp++;
                nums[i] += temp;
                count += temp;
            }
        }
        return count;
    }
};