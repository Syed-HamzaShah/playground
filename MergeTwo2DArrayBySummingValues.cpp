class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        unordered_map<int, int> freqMap;
        vector<vector<int>> ans;

        for (auto &num : nums1)
            freqMap[num[0]] += num[1];

        for (auto &num : nums2)
            freqMap[num[0]] += num[1];

        for (auto &pair : freqMap)
            ans.push_back({pair.first, pair.second});

        sort(ans.begin(), ans.end());

        return ans;
    }
};