class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;

        for(int i = 1; i <= size; i++)
            if(size % i == 0)
                ans += (nums[i-1] * nums[i-1]);
        
        return ans;
    }
};