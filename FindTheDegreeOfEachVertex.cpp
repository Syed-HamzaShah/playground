class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++){
            int sum = 0;
            for(int j = 0; j < matrix[i].size(); j++)
                if(matrix[i][j] == 1) 
                    sum++;
            ans.push_back(sum);        
        }

        return ans;
    }
};