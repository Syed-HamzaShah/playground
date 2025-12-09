class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long MOD = 1e9 + 7;
        if(nums.size() < 3) return 0;

        unordered_map<int, int> leftCount;
        unordered_map<int, int> rightCount;

        leftCount[nums[0]]++;

        for(int i = 1; i < nums.size(); i++)
            rightCount[nums[i]]++;

        long long ans = 0;
        for(int i = 1; i < nums.size()-1; i++){
            rightCount[nums[i]]--;

            long long target = nums[i] * 2LL;
            long long L = leftCount[target];
            long long R = rightCount[target];

            ans = (ans + (L * R) % MOD) % MOD;

            leftCount[nums[i]]++;
        }    
        
        return ans;
    }
};