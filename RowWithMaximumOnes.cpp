class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = 0;
        int ones = 0;

        for (int i=0;i<mat.size();i++){
            int temp = 0;
            for (int j=0;j<mat[0].size();j++)
                if (mat[i][j]==1)
                    temp++;

            if (temp > ones){
                row = i;
                ones = temp;
            }
        }

        return {row, ones};
    }
};