class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int i = 1;
        int j = nums.size() -2;
        for(i; i < nums.size()-1; i++)
            if(nums[i] != nums[i-1]) break;
        for(j; j >= 1; j--)
            if(nums[j] != nums[j+1]) break;

        while(i <= j){
            if(nums[i] >= nums[i-1] && nums[i] <= nums[i+1]) count++;
            i++;
        }
        return count;
    }
};