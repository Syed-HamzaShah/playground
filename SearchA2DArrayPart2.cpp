#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix[0].size(), m = matrix.size();
        int row = 0, column = n - 1;

        while (column >= 0 && row < m)
        {
            if (target == matrix[row][column])
                return true;

            else if (target < matrix[row][column])
                column--;

            else
                row++;
        }
        return false;
    }
};