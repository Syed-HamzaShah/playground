class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto num: nums)
            m[num]++;

        for(auto [num,count] : m)
            if(count % 2 != 0)
                return false;    
        
        return true;
    }
};