class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        set<int> s;

        for (int i = 0; i < n; i++)
            s.insert(stoi(nums[i], nullptr, 2));

        for (int i = 0; i < (1 << n); i++) {
            if (s.find(i) == s.end()) {
                string ans = bitset<16>(i).to_string();
                return ans.substr(16 - n);
            }
        }

        return "";
    }
};