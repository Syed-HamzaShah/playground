class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        vector<vector<int>> ans;

        for (int i = 0; i < grid.size() - 2; i++)
        {
            vector<int> temp;
            for (int j = 0; j < grid.size() - 2; j++)
            {
                int m = 0;
                for (int k = i; k < i + 3; k++)
                {
                    for (int l = j; l < j + 3; l++)
                    {
                        if (grid[k][l] > m)
                            m = max(grid[k][l], m);
                    }
                }
                temp.push_back(m);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};