class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> index;
        for (int i = 0; i < n; i++) 
            index[nums[i]] = i;
        

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        long long ans = n;

        for (int i = 1; i < n; i++) 
            if (index[sorted[i]] < index[sorted[i - 1]]) 
                ans += n - i;
        
        return ans;
    }
};