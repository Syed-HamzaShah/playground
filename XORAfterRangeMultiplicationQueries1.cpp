class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int ans = 0;
        const int mod = 1000000007;

        for(int i = 0; i < queries.size(); i++){
            for(int j = queries[i][0]; j <= queries[i][1]; ){
                nums[j] = (1LL * nums[j] * queries[i][3]) % mod;
                j += queries[i][2];
            }
        }

        for(int i = 0; i < nums.size(); i++)
            ans ^= nums[i];

        return ans;
    }
};