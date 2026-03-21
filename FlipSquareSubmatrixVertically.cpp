class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>> ans;

        for(int i = x; i < x + k; i++){
            vector<int> temp;
            for(int j = y; j < y + k; j++){
                temp.push_back(grid[i][j]);
            } 
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());

        int a = 0;
        int b = 0;

        for(int i = x; i < x + k; i++){
            for(int j = y; j < y + k; j++){
                grid[i][j] = ans[a][b];
                b++;
            } 
            b = 0;
            a++;
        }

        return grid;
    }
};