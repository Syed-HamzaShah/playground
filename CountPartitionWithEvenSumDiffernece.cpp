class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int ans = 0;
        int sum = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            sum += nums[i];
            int sum2 = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum2 += nums[j];
            }
            if ((sum - sum2) % 2 == 0)
                ans++;
        }

        return ans;
    }
};