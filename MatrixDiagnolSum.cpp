#include <vector>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int ans = 0;
        int size = mat.size();
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (i == j)
                    ans += mat[i][j];
                else if (j == size - 1 - i)
                    ans += mat[i][j];
            }
        }
        return ans;
    }
};