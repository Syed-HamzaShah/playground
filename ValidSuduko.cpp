class Solution {
public:
    bool lineChecker(vector<vector<char>>& board, int i, int j){
        unordered_map<char,int> m;
        for(int row = 0; row < 9; row++){
            if(board[row][j] == '.') continue;
            if(m[board[row][j]] > 0)
                return false;
            else
                m[board[row][j]]++;    
        }
        m.clear();
        for(int col = 0; col < 9; col++){
            if(board[i][col] == '.') continue;
            if(m[board[i][col]] > 0)
                return false;
            else
                m[board[i][col]]++;    
        }
        return true;
    }

    bool gridChecker(vector<vector<char>>& board, int i, int j){
        unordered_map<char,int> m;

        for(int row = i; row < i + 3; row++){
            for(int col = j; col < j + 3; col++){
                if(board[row][col] == '.') continue;
                if(m[board[row][col]] > 0)
                    return false;
                else
                    m[board[row][col]]++;    
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++){
            bool rowAndCol = lineChecker(board,i,i);
            if(!rowAndCol) return false;   
        }

        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                bool grid = gridChecker(board,i,j);
                if(!grid) return false;
            }
        }
        
        return true;
    }
};