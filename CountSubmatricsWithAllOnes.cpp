class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> height(col, 0);
        int result = 0;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(mat[i][j] == 1)
                    height[j]++;
                else 
                    height[j] = 0;
            }

            for(int j = 0; j < col; j++){
                int minHeight = height[j];
                for(int k = j; k >= 0 && height[k] > 0; k--){
                    minHeight = min( minHeight, height[k]);
                    result += minHeight;
                }
            }
        }

        return result;
    }
};