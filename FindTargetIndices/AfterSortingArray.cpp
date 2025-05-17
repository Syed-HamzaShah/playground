class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        auto low = lower_bound(nums.begin(), nums.end(), target);
        auto high = upper_bound(nums.begin(), nums.end(), target);

        for (auto i = low; i < high; i++)
        {
            ans.push_back(i - nums.begin());
        }

        return ans;
    }
};