class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        for(int i = 0; i < row; i++){
            sortMat(mat,row,col,i,0);
        }

        for(int i = 0; i < col; i++){
            sortMat(mat,row,col,0,i);
        }
        
        return mat;
    }

    void sortMat(vector<vector<int>>& mat, int rowSize, int colSize, int row, int col){
        vector<int> countSort(101, 0);

        int i = row;
        int j = col;

        while(i < rowSize && j < colSize){
            countSort[mat[i][j]]++;
            i++;
            j++;
        }

        i = row;
        j = col;

        for(int val = 1; val < 101; val++){
                while(countSort[val] > 0){
                    mat[i][j] = val;
                    countSort[val]--;
                    i++;
                    j++;
                }
        }
    }
};