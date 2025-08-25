class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.size() == 0) return {};

        int row = mat.size();
        int col = mat[0].size();
        int totalArea = row * col;

        vector<int> ans(totalArea, 0);

        int i = 0; 
        int j = 0;
        int Area = 0;

        bool alternate = true;

        while(Area < totalArea){

            ans[Area] = mat[i][j];

            if(alternate){
                if(j == col -1){
                    i++;
                    alternate = false;
                }
                else if(i == 0){
                    j++;
                    alternate = false;
                }
                else{
                    i--;
                    j++;
                }    
            }
            else{
                if(i == row -1){
                    j++;
                    alternate = true;
                }
                else if(j == 0){
                    i++;
                    alternate = true;
                }
                else{
                    j--;
                    i++;
                }    
            }

            Area++;
        }

        return ans;
    }
};