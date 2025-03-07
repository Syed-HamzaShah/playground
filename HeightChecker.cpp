#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> v = heights;
        sort(heights.begin(), heights.end());
        int count = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != heights[i])
                count++;
        }
        return count;
    }
};