#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool check(vector<string> &board, int i, int j, int n)
    {
        for (int row = 0; row < n; row++)
        {
            if (board[row][j] == 'Q')
                return false;
        }
        for (int col = 0; col < n; col++)
        {
            if (board[i][col] == 'Q')
                return false;
        }

        for (int row = i, col = j; row >= 0 && col >= 0; row--, col--)
        {
            if (board[row][col] == 'Q')
                return false;
        }

        for (int row = i, col = j; row >= 0 && col < n; row--, col++)
        {
            if (board[row][col] == 'Q')
                return false;
        }

        return true;
    }

    void backtracking(int &ans, vector<string> &board, int i, int n)
    {
        if (i == n)
        {
            ans++;
            return;
        }

        for (int j = 0; j < n; j++)
        {
            if (check(board, i, j, n))
            {
                board[i][j] = 'Q';
                backtracking(ans, board, i + 1, n);
                board[i][j] = '-';
            }
        }
    }

    int totalNQueens(int n)
    {
        vector<string> board(n, string(n, '-'));
        int ans = 0;
        backtracking(ans, board, 0, n);

        return ans;
    }
};