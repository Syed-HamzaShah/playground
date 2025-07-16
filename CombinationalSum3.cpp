class Solution {
    vector<vector<int>> ans;

public:
    void leapOfFaith(int start, int k, int n, vector<int>& temp, int sum) {
        if (temp.size() == k) {
            if (sum == n) ans.push_back(temp);
            return;
        }
        for (int i = start; i <= 9; i++) {  // only numbers 1 to 9
            if (sum + i > n) break; // no need to continue if sum exceeds target
            temp.push_back(i);
            leapOfFaith(i + 1, k, n, temp, sum + i);
            temp.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        leapOfFaith(1, k, n, temp, 0);
        return ans;
    }
};
