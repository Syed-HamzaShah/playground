class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<long long> rowSum(m, 0);
        vector<long long> colSum(n, 0);

        long long totalSum = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                rowSum[i] += grid[i][j];
                totalSum += grid[i][j];
            }
        }

        for(int j = 0; j < n; j++){
            for(int i = 0; i < m; i++){
                colSum[j] += grid[i][j];
            }
        }

        long long prefix = 0;
        for(int i = 0; i < m - 1; i++){
            prefix += rowSum[i];
            if(prefix == totalSum - prefix)
                return true;
        }

        prefix = 0;
        for(int j = 0; j < n - 1; j++){
            prefix += colSum[j];
            if(prefix == totalSum - prefix)
                return true;
        }

        return false;
    }
};