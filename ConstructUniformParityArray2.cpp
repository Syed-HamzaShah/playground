class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        for(int x : nums1) 
            mini= min(mini, x);

        if(mini % 2) 
            return true;

        for(int num: nums1) 
            if(num % 2) 
                return false;
                
        return true;
    }
};