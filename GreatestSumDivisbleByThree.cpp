class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int total = 0;
        int oneRemainder = INT_MAX;
        int twoRemainder = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
            if(nums[i] % 3 == 1){
                if (oneRemainder != INT_MAX)
                    twoRemainder = min(twoRemainder, nums[i] + oneRemainder);
                oneRemainder = min(oneRemainder, nums[i]);
            }
            else if(nums[i] % 3 == 2){
                if (twoRemainder != INT_MAX)
                    oneRemainder = min(oneRemainder, nums[i] + twoRemainder);
                twoRemainder = min(twoRemainder, nums[i]);
            }
        }

        if(total % 3 == 0) return total;

        int ans = 0;
        if (oneRemainder != INT_MAX && (total - oneRemainder) % 3 == 0)
            ans = max(ans, total - oneRemainder);
        if (twoRemainder != INT_MAX && (total - twoRemainder) % 3 == 0)
            ans = max(ans, total - twoRemainder);

        return ans;    
    }
};