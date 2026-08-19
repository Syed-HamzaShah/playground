class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() -1;
        int sumI = 0;
        int sumJ = 0;

        while(i < k){
            sumI += nums[i++];
            sumJ += nums[j--];
        }
        
        return abs(sumJ - sumI);
    }
};