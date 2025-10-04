class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> s(nums.begin(), nums.end());

        while(1){
            if(s.find(original) != s.end())
                original *= 2;
            else
                return original;    
        }
        return original;
    }
};