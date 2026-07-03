class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));

        for (auto &idx : indices) {
            int r = idx[0];
            int c = idx[1];

            for (int j = 0; j < n; j++)
                matrix[r][j]++;

            for (int i = 0; i < m; i++) 
                matrix[i][c]++;
        }

        int count = 0;
        for (int i = 0; i < m; i++) 
            for (int j = 0; j < n; j++) 
                if (matrix[i][j] % 2 == 1)
                    count++;

        return count;
    }
};