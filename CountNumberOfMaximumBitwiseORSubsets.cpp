lass Solution {
    int maxOR = 0;
    int count = 0;
public:
    void dfs(vector<int>& nums, int index, int currOR){
        if(index == nums.size()){
            if(currOR == maxOR) count++;
            return;
        }

        dfs(nums, index+1, currOR | nums[index]);
        dfs(nums, index+1, currOR);
        return;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            maxOR |= nums[i];
        
        dfs(nums, 0, 0);
        return count;
    }
};