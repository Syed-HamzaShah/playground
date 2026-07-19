class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n, 0);
        vector<int> postfix(n, 0);

        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + nums[i - 1];

        for (int i = n - 2; i >= 0; i--)
            postfix[i] = postfix[i + 1] + nums[i + 1];

        for (int i = 0; i < n; i++) {
            if (prefix[i] == postfix[i])
                return i;
        }

        return -1;
    }
};