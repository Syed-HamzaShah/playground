class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> mark(nums.size(), 0);

        for(int i = 0; i < nums.size(); i++)
            mark[nums[i] -1]++;
        
        vector<int> ans;
        for(int i = 0; i < mark.size(); i++)
            if(mark[i] == 2) 
                ans.push_back(i+1);
        
        mark.clear();
        return ans;
    }
};