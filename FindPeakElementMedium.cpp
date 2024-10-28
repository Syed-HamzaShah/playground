#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {

        if (nums.size() == 1)
            return 0;
        if (nums.at(0) > nums.at(1))
            return 0;
        if (nums.at(nums.size() - 1) > nums.at(nums.size() - 2))
            return nums.size() - 1;

        int start = 1;
        int end = nums.size() - 2;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (mid == 0 && nums.at(mid) > nums.at(mid + 1))
                return mid;

            if (mid == nums.size() - 1 && nums.at(mid) > nums.at(nums.size() - 2))
                return mid;
            if (nums.at(mid - 1) < nums.at(mid) && nums.at(mid) > nums.at(mid + 1))
                return mid;

            if (nums.at(mid) < nums.at(mid + 1))
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
};