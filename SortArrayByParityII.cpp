#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = n - 1;
        vector<int> ans(n, 0);

        for (auto num : nums)
        {
            if (num % 2 == 0)
            {
                ans[i] = num;
                i += 2;
            }
            else
            {
                ans[j] = num;
                j -= 2;
            }
        }
        return ans;
    }
};