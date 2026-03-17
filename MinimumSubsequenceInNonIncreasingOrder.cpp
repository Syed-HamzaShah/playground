class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int num: nums)
            sum += num;
        vector<int> ans;
        int maxSum = 0;

        for(int i = nums.size()-1; i >= 0; i--){
            ans.push_back(nums[i]);
            maxSum += nums[i];
            sum -= nums[i];
            if(maxSum > sum)
                return ans;
        }
        return ans;
    }
};