class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> temp(nums.begin(), nums.end());

        for(int i = 1; ; i++)
            if (temp.find(k * i) == temp.end())
                return k * i;
        
        return -1;
    }
};