class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        vector<vector<char>> newGrid(m, vector<char>(n, '.'));

        for(int i = n - 1; i >= 0; i--){
            int a = m - 1;
            int b = m - 1;
            
            while(a >= 0){
                if(boxGrid[i][a] == '#'){
                    newGrid[b][n - 1 - i] = '#';
                    a--;
                    b--;
                }
                else if(boxGrid[i][a] == '.'){
                    a--;
                }
                else{
                    newGrid[a][n - 1 -i] = '*';
                    b = a - 1;
                    a--;
                }
            }
        }

        return newGrid;
    }
};