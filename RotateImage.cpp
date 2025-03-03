class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int size = matrix.size();

        for (int n = 0; n < size; n++)
            for (int i = n, j = n; i < size && j < size; i++, j++)
                swap(matrix[n][i], matrix[j][n]);

        for (int n = 0; n < size; n++)
            for (int i = 0, j = size - 1; i <= j && j >= i; i++, j--)
                swap(matrix[n][i], matrix[n][j]);
    }
};