#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numberOfPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        int count = 0;

        for (int a : nums1)
            for (int b : nums2)
            {
                int multiplied = b * k;
                if (multiplied != 0 && a % multiplied == 0)
                    count++;
            }

        return count;
    }
};
