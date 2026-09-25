class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first = 0;
        int second = 0;
        bool isFirst = true;

        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] % 2 != 0) 
                isFirst = !isFirst;
            if(i % 6 == 5) 
                isFirst = !isFirst;

            if(isFirst) 
                first += nums[i];
            else 
                second += nums[i];
        }

        return first - second;
    }
};