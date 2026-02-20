class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = 0;

        for(int num: nums)
            m[num]++;

        for(auto [first, second]: m)
            if(second % k == 0)
                ans += first * second;  
        
        return ans;
    }
};