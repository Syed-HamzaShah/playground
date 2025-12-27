class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> m;

        for(int &num: nums)
            m[num]++;

        vector<int> ans(2, 0);
        for(auto &[first, second]: m){
            ans[0] += second / 2;
            ans[1] += second % 2;
        }
                
        return ans;
    }
};