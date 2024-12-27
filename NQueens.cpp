#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool free(vector<string> &board, int i, int j, int n)
    {
        for (int row = 0; row < n; row++)
        {
            if (board[row][j] == 'Q')
                return false;
        }
        for (int column = 0; column < n; column++)
        {
            if (board[i][column] == 'Q')
                return false;
        }
        for (int row = i, column = j; row >= 0 && column >= 0; row--, column--)
        {
            if (board[row][column] == 'Q')
                return false;
        }
        for (int row = i, column = j; row >= 0 && column < n; row--, column++)
        {
            if (board[row][column] == 'Q')
                return false;
        }

        return true;
    }

    void backtracking(vector<vector<string>> &ans, vector<string> &board, int i, int n)
    {
        if (i == n)
        {
            ans.push_back({board});
            return;
        }

        for (int j = 0; j < n; j++)
        {
            if (free(board, i, j, n))
            {
                board[i][j] = 'Q';
                backtracking(ans, board, i + 1, n);
                board[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        backtracking(ans, board, 0, n);

        return ans;
    }
};