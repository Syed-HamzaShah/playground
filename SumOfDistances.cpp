class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<int>> m;
        int n = nums.size();
        vector<long long> ans(n);

        // Step 1: store indices
        for (int i = 0; i < n; i++) {
            m[nums[i]].push_back(i);
        }

        // Step 2: process each group
        for (auto& [val, indices] : m) {
            int k = indices.size();
            vector<long long> prefix(k);
            prefix[0] = indices[0];

            for (int i = 1; i < k; i++)
                prefix[i] = prefix[i - 1] + indices[i];

            for (int i = 0; i < k; i++) {
                long long left = 0, right = 0;
                if (i > 0)
                    left = (long long)indices[i] * i - prefix[i - 1];
                if (i < k - 1)
                    right = (prefix[k - 1] - prefix[i]) - (long long)indices[i] * (k - i - 1);
                ans[indices[i]] = left + right;
            }
        }

        return ans;
    }
};