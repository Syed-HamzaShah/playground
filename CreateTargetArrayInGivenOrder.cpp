class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target (nums.size(), -1);

        for(int i = 0; i < nums.size(); i++){
            if(target[index[i]] == -1) target[index[i]] = nums[i];
            else target.insert(target.begin() + index[i], nums[i]);
        }

        while(target.size() != nums.size())
            target.pop_back();
        return target;
    }
};