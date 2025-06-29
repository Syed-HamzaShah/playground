class Solution {
    int total = 0;

    void backtrack(const vector<int>& num, int i, int xorSum) {
        if (i == num.size()) {
            total += xorSum;
            return;
        }

        // Include num[i]
        backtrack(num, i + 1, xorSum ^ num[i]);

        // Exclude num[i]
        backtrack(num, i + 1, xorSum);
    }

public:
    int subsetXORSum(vector<int>& nums) {
        backtrack(nums, 0, 0);
        return total;
    }
};
