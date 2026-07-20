class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows * cols;

        k %= total;

        vector<int> temp;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                temp.push_back(grid[i][j]);
            }
        }

        vector<int> shifted(total);
        for (int i = 0; i < total; i++) {
            shifted[(i + k) % total] = temp[i];
        }

        vector<vector<int>> ans(rows, vector<int>(cols));
        int idx = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                ans[i][j] = shifted[idx++];
            }
        }

        return ans;
    }
};