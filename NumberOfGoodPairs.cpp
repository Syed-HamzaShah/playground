#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> count;
        int ans = 0;

        for (int num : nums)
        {
            if (count.find(num) != count.end())
            {
                ans += count[num];
            }
            count[num]++;
        }

        return ans;
    }
};