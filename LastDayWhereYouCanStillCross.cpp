class Solution {
public:

    bool canCross(int day, int row, int col, vector<vector<int>>& cells) {
        vector<vector<int>> grid(row, vector<int>(col, 0));

        for(int i = 0; i < day; i++) {
            int r = cells[i][0] - 1;
            int c = cells[i][1] - 1;
            grid[r][c] = 1; 
        }

        queue<pair<int,int>> q;
        
        for(int c = 0; c < col; c++) {
            if(grid[0][c] == 0) {
                q.push({0, c});
                grid[0][c] = 1;
            }
        }

        vector<int> dir = {1,0,-1,0,1};

        while(!q.empty()) {
            auto [x,y] = q.front(); q.pop();

            if(x == row-1) return true;

            for(int i = 0; i < 4; i++){
                int nx = x + dir[i], ny = y + dir[i+1];

                if(nx>=0 && ny>=0 && nx<row && ny<col && grid[nx][ny] == 0) {
                    grid[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
        return false;
    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int low = 1, high = cells.size(), ans = 0;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(canCross(mid, row, col, cells)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
