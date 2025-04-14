class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> A(nums1.begin(), nums1.end());
        unordered_set<int> B(nums2.begin(), nums2.end());
        vector<vector<int>> ans;
        vector<int> temp = {};

        for (auto &num : A)
            if (B.find(num) == B.end())
                temp.push_back(num);

        ans.push_back(temp);
        temp.clear();

        for (auto &num : B)
            if (A.find(num) == A.end())
                temp.push_back(num);

        ans.push_back(temp);

        return ans;
    }
};