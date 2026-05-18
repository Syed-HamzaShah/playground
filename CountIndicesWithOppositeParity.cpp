class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0 ; i < nums.size() - 1; i++){
            int temp = 0;
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] % 2 == 0 && nums[j] % 2 != 0)
                    temp++;
                else if(nums[i] % 2 != 0 && nums[j] % 2 == 0)
                    temp++;    
            }
            ans.push_back(temp);
        }
        ans.push_back(0);
        return ans;
    }
};