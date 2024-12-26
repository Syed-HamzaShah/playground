#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void backtracking(vector<int> &nums, vector<int> &ans, vector<vector<int>> &subsets, int i)
    {
        if (i == nums.size())
        {
            subsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        backtracking(nums, ans, subsets, i + 1);
        ans.pop_back();

        int index = i + 1;
        while (index < nums.size() && nums[index] == nums[index - 1])
            index++;

        backtracking(nums, ans, subsets, index);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> subsets;
        vector<int> ans;
        sort(nums.begin(), nums.end());

        backtracking(nums, ans, subsets, 0);

        return subsets;
    }
};