class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        double ans = INT_MAX;
        int i = 0;
        int j = nums.size() - 1;

        sort(nums.begin(), nums.end());

        while (i < j)
        {
            double temp = (nums[i] + nums[j]) / 2.0;
            ans = min(ans, temp);
            i++, j--;
        }

        return ans;
    }
};