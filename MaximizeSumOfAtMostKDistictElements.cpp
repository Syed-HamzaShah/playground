class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> s;

        for (int num : nums) {
            s.insert(num);
        }

        vector<int> ans;

        while (!s.empty() && k > 0) {
            auto it = prev(s.end());
            ans.push_back(*it);
            s.erase(it);
            k--;
        }

        return ans;
    }
};