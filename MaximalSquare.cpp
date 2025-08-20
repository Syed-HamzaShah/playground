class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> dp(row, vector<int>(col, 0));

        for(int i = 0; i < row; i++)
            dp[i][0] = matrix[i][0] - '0';

        for(int j = 0; j < col; j++)
            dp[0][j] = matrix[0][j] - '0';

        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][j] == '1'){
                    int temp = min( dp[i][j-1], dp[i-1][j]);
                    temp = min(temp,dp[i-1][j-1]); 
                    dp[i][j] = temp + 1;
                }
                else dp[i][j] = 0;
            }
        } 
        int ans = 0;

        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                ans = max(dp[i][j] , ans);   

        if(ans == 1) return 1;
        return ans * ans; 
    }    
};