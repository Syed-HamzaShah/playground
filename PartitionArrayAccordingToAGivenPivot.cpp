class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> small;
        vector<int> equal;
        vector<int> large;
        vector<int> ans;

        for (auto &num : nums)
        {
            if (num > pivot)
                small.push_back(num);
            else if (num == pivot)
                equal.push_back(num);
            else
                large.push_back(num);
        }

        for (auto s : large)
            ans.push_back(s);
        for (auto s : equal)
            ans.push_back(s);
        for (auto s : small)
            ans.push_back(s);

        return ans;
    }
};