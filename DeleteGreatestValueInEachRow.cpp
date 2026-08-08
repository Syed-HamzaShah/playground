class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int result = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(auto &row: grid)
            sort(row.begin(), row.end());

        for(int i = 0; i < m; i++){
            int temp = 0;

            for(int j = 0; j < n; j++)
                temp = max(temp, grid[j][i]);

            result += temp;    
        }    
        
        return result;
    }
};