#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int leftPointer = 1;

        for (int rightPointer = 1; rightPointer < nums.size(); rightPointer++)
        {
            if (nums[rightPointer] != nums[rightPointer - 1])
            {
                nums[leftPointer] = nums[rightPointer];
                leftPointer++;
            }
        }
        return leftPointer;
    }
};