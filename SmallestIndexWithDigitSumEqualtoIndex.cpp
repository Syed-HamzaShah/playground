class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 10 && nums[i] == i) return i;
            else{
                int temp = nums[i];
                int sum = 0;
                while(temp > 0){
                    sum += temp % 10;
                    temp /= 10;
                }
                if(sum == i) return i;
            }
        }
        return -1;
    }
};