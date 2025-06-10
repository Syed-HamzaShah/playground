class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int positive = 0;
        int negative = 1;

        for(auto num: nums){
            if(num > 0){
                ans[positive] = num;
                positive += 2;
            }
            else{
                ans[negative] = num;
                negative += 2;
            }
        }

        return ans;
    }
};