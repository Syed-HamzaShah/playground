#include <vector>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int m = INT_MIN;
        vector<bool> ans;
        for (auto candie : candies)
        {
            m = max(m, candie);
        }
        for (auto candie : candies)
        {
            if (candie + extraCandies >= m)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};