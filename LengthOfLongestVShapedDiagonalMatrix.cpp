class Solution {
public:
    vector<vector<int>> directions = {{1,1},{1,-1},{-1,-1},{-1,1}};
    int m;
    int n;

    int find(const vector<vector<int>>& grid, int i, int j, int dir,bool allowed, int target){
        int ni = i + directions[dir][0];
        int nj = j + directions[dir][1];
        if(ni < 0 || ni >= m || nj < 0 || nj >= n || grid[ni][nj] != target) return 0;

        int notturned = 1 + find(grid, ni, nj, dir, allowed, 2- target);
        int turned = 0;
        if(allowed) 
            turned = 1 + find(grid, ni, nj, (dir + 1) %4, false, 2- target);

        return max(turned, notturned);
    }

    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int ans = 0;
        int row = grid.size();
        int col = grid[0].size();
        m = row;
        n = col;

        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                if(grid[i][j] == 1)
                    for(int k = 0; k < 4; k++)
                        ans = max(ans,1 + find(grid,i,j,k,true,2));
         
        return ans;
    }
};