class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size();
        int column = grid[0].size();

        vector<int> rowOne(row,0);
        vector<int> columnOne(column,0);

        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(grid[i][j] == 1){
                    rowOne[i] += 1;
                    columnOne[j] += 1;
                }
            }
        }

        vector<vector<int>> ans;

        for(int i = 0; i < row; i++){
            vector<int> temp;
            for(int j = 0; j < column; j++){
                int zeroRow = column - rowOne[i];
                int zeroColumn = row - columnOne[j];
                
                int diff = (rowOne[i] + columnOne[j]) - (zeroRow + zeroColumn);
                temp.push_back(diff);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};