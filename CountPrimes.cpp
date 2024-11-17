#include <vector>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> Prime(n + 1, true);
        int ans = 0;

        for (int i = 2; i < n; i++)
        {
            if (Prime[i])
            {
                ans++;
                for (int j = i * 2; j < n; j = j + i)
                {
                    Prime[j] = false;
                }
            }
        }
        return ans;
    }
};