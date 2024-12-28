#include <vector>
using namespace std;

class Solution
{
public:
    bool grid(int i, int j, vector < vector<char> & board, char number)
    {
        for (int k = i; k < 3; k++)
        {
            for (int l = j; l < 3; l++)
            {
                if (board[k][l] == number)
                    return false;
            }
        }
        return true;
    }

    bool correct(vector < vector<char> & board, int i, int j, char number)
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

        if (i < 3 && j < 3)
        {
            bool answer = grid(0, 0, board, number);
            if (!answer)
                return false;
        }
        if (i < 3 && j < 6 && j > 3)
        {
            bool answer = grid(0, 3, board, number);
            if (!answer)
                return false;
        }
        if (i < 3 && j < 9 && j > 6)
        {
            bool answer = grid(0, 6, board, number);
            if (!answer)
                return false;
        }
        if (i < 6 && i > 3 && j < 3)
        {
            bool answer = grid(3, 0, board, number);
            if (!answer)
                return false;
        }
        if (i < 6 && i > 3 && j < 6 && j > 3)
        {
            bool answer = grid(3, 3, board, number);
            if (!answer)
                return false;
        }
        if (i < 6 && i > 3 && j < 9 && j > 6)
        {
            bool answer = grid(3, 6, board, number);
            if (!answer)
                return false;
        }
        if (i < 9 && i > 6 && j < 3)
        {
            bool answer = grid(6, 0, board, number);
            if (!answer)
                return false;
        }
        if (i < 9 && i > 6 && j < 6 && j > 3)
        {
            bool answer = grid(6, 3, board, number);
            if (!answer)
                return false;
        }
        if (i < 9 && i > 6 && j < 9 && j > 6)
        {
            bool answer = grid(6, 6, board, number);
            if (!answer)
                return false;
        }

        return true;
    }

    void backtracking(vector < vector<char> & board, vector<vector<char>> &ans, int row, char num)
    {

        if (row == n && column == n)
        {
            ans.push_back(board);
            return;
        }

        for (int loop = 0; loop < 9; loop++)
        {
            if (correct(board, row, loop, number))
        }
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        vector<vector<char>> ans;
        backtracking(board, ans, 0, '0');
    }
};