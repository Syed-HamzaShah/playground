class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxValue = nums[0];

        for(int i = 1; i < nums.size(); i++)
            maxValue = max(maxValue, nums[i]);

        int ans = 0;

        for(int i = 0; i < nums.size(); i++)
            ans += maxValue - nums[i];    
        
        return ans;
    }
};