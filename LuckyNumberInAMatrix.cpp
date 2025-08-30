class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> rowMin(matrix.size(), INT_MAX);
        vector<int> colMax(matrix[0].size(), INT_MIN);


        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                colMax[j] = max(colMax[j], matrix[i][j]);
                rowMin[i] = min(rowMin[i], matrix[i][j]);
            }
        }
        vector<int> ans;
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j])
                    ans.push_back(matrix[i][j]);
            }
        }

        return ans;
    }
};