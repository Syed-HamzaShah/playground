class Solution {
public:
    bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,
             int i, int j, int pi, int pj, char element) {
        
        int m = grid.size();
        int n = grid[0].size();

        visited[i][j] = true;

        int dirs[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};

        for(auto& d : dirs) {
            int ni = i + d[0];
            int nj = j + d[1];

            if(ni < 0 || nj < 0 || ni >= m || nj >= n)
                continue;

            if(grid[ni][nj] != element)
                continue;

            if(visited[ni][nj]) {
                if(ni != pi || nj != pj)
                    return true;
            } else {
                if(dfs(grid, visited, ni, nj, i, j, element))
                    return true;
            }
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!visited[i][j]) {
                    if(dfs(grid, visited, i, j, -1, -1, grid[i][j]))
                        return true;
                }
            }
        }

        return false;
    }
};