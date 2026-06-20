class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0;
        int boundary = 0;

        for(int i = 0; i < nums.size(); i++){
            boundary += nums[i];
            if(boundary == 0) ans++;
        }

        return ans;
    }
};