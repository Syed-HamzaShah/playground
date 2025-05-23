#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return -1;

        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] == 0)
            {
                nums[i] ^= 1;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
                count++;
            }
        }

        for (int i = n - 2; i < n; i++)
            if (nums[i] == 0)
                return -1;

        return count;
    }
};