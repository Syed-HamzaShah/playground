#include <vector>
using namespace std;

class Solution
{
public:
    bool safe(vector<vector<char>> &board, int i, int j, char number)
    {
        for (int row = 0; row < 9; row++)
        {
            if (board[row][j] == number)
                return false;
        }

        for (int column = 0; column < 9; column++)
        {
            if (board[i][column] == number)
                return false;
        }

        int startRow = (i / 3) * 3;
        int startColumn = (j / 3) * 3;

        for (int k = startRow; k <= startRow + 2; k++)
        {
            for (int l = startColumn; l <= startColumn + 2; l++)
            {
                if (board[k][l] == number)
                    return false;
            }
        }

        return true;
    }

    bool helper(vector<vector<char>> &board, int row, int col)
    {
        if (row == 9)
            return true;

        int nextRow = row, nextCol = col + 1;

        if (nextCol == 9)
        {
            nextRow = row + 1;
            nextCol = 0;
        }

        if (board[row][col] != '.')
            return helper(board, nextRow, nextCol);

        for (char digit = '1'; digit <= '9'; digit++)
        {
            if (safe(board, row, col, digit))
            {
                board[row][col] = digit;
                if (helper(board, nextRow, nextCol))
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>> &board)
    {
        helper(board, 0, 0);
    }
};