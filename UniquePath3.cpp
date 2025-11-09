class Solution {
    int ans = 0;
    int totalEmpty = 0;
    int startX, startY;
    
public:
    void backtrack(int i, int j, int count, vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == -1)
            return;

        if(grid[i][j] == 2) {
            if(count == totalEmpty) ans++;
            return;
        }

        int temp = grid[i][j];
        grid[i][j] = -1;

        backtrack(i + 1, j, count + 1, grid);
        backtrack(i - 1, j, count + 1, grid);
        backtrack(i, j + 1, count + 1, grid);
        backtrack(i, j - 1, count + 1, grid);

        grid[i][j] = temp;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] != -1)
                    totalEmpty++;
                if(grid[i][j] == 1) {
                    startX = i;
                    startY = j;
                }
            }
        }

        backtrack(startX, startY, 1, grid);
        return ans;
    }
};
