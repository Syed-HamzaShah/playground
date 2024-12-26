#include <vector>
using namespace std;

class Solution
{
public:
    void backtracking(vector<vector<int>> &ans, vector<int> &nums, int index)
    {
        if (index == nums.size())
        {
            ans.push_back({nums});
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            backtracking(ans, nums, index + 1);

            swap(nums[i], nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        backtracking(ans, nums, 0);

        return ans;
    }
};