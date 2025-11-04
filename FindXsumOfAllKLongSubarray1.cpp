class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i <= n - k; i++) {
            unordered_map<int, int> freq;

            for (int j = i; j < i + k; j++)
                freq[nums[j]]++;

            vector<pair<int, int>> v;
            for (auto& p : freq)
                v.push_back({p.first, p.second});

            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                if (a.second == b.second)
                    return a.first > b.first;
                return a.second > b.second;
            });

            int total = 0;
            for (int t = 0; t < min(x, (int)v.size()); t++)
                total += v[t].first * v[t].second;

            ans.push_back(total);
        }

        return ans;
    }
};
