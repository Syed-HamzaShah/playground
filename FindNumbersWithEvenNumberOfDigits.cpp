#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            int n = nums[i];
            string size = "";

            while (n != 0)
            {
                int num = n % 10;
                size += (num + '0');
                n /= 10;
            }

            if (size.length() % 2 == 0 && size.length() != 0)
                ans++;
        }

        return ans;
    }
};