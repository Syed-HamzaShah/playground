class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rowOne(mat.size(), 0);
        vector<int> colOne(mat[0].size(), 0);

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1){
                    rowOne[i]++;
                    colOne[j]++;
                }
            }
        }

        int ans = 0;
        
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1 && rowOne[i] == 1 && colOne[j] == 1){
                    ans++;
                }
            }
        }

        return ans;
    }
};