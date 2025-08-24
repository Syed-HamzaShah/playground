class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        vector<int> left(nums.size(),0);
        for(int i = 1 ; i < nums.size(); i++)
            if(nums[i-1] == 1)
                left[i] = left[i-1] + 1;

        vector<int> right(nums.size(),0);
        for(int i = nums.size()-2 ; i >= 0; i--)
            if(nums[i+1] == 1)
                right[i] = right[i + 1] + 1;

        int ans = 0;        
        for(int i = 0; i < nums.size(); i++)
            ans = max(ans, left[i] + right[i]);

        return ans;
    }
};