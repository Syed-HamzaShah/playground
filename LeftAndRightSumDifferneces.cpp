class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int totalsum = 0;

        for (auto &num : nums)
            totalsum += num;

        int leftsum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int rightsum = totalsum - leftsum - nums[i];
            ans[i] = abs(leftsum - rightsum);
            leftsum += nums[i];
        }

        return ans;
    }
};