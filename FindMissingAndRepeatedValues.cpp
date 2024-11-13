#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        vector<int> ans;
        unordered_set<int> s;
        int m = grid.size();
        int n = grid[0].size();
        int number1, number2;
        int expectedSum = 0;
        int sum = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum += grid[i][j];

                if (s.find(grid[i][j]) != s.end())
                {
                    number1 = grid[i][j];
                    ans.push_back(number1);
                }
                s.insert(grid[i][j]);
            }
        }

        expectedSum = (m * n) * (m * n + 1) / 2;
        number2 = expectedSum + number1 - sum;
        ans.push_back(number2);

        return ans;
    }
};