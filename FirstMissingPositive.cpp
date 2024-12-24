#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int size = nums.size();
        set<int> s;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] > 0)
                s.insert(nums[i]);
        }
        int num = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s.find(num) != s.end())
                num++;
        }

        return num;
    }
};