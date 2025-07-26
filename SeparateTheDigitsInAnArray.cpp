class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        string temp = "";

        for(int i = 0; i < nums.size(); i++)
            temp += (to_string(nums[i]));
        
        for(auto t: temp)
            ans.push_back(t - '0');
        
        return ans;
    }
};