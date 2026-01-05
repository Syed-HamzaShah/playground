class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long absSum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (auto& row : matrix) {
            for (int x : row) {
                if (x < 0) negCount++;
                absSum += abs(x);
                minAbs = min(minAbs, abs(x));
            }
        }

        if (negCount % 2 == 1) 
            absSum -= 2LL * minAbs;

        return absSum;
    }
};
