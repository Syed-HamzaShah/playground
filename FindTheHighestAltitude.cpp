#include <vector>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int ans = 0;
        int sum = 0;

        for (int i = 0; i < gain.size(); i++)
        {
            sum = sum + gain[i];
            ans = max(sum, ans);
        }
        return ans;
    }
};