#include <vector>
using namespace std;

class Solution
{
public:
    int minElement(vector<int> &nums)
    {
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int m = 0;

            while (num != 0)
            {
                int n = num % 10;
                m += n;
                num /= 10;
            }
            ans = min(m, ans);
        }
        return ans;
    }
};