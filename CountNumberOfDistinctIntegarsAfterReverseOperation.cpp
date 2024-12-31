#include <set>
#include <vector>
using namespace std;

class Solution
{
public:
    int countDistinctIntegers(vector<int> &nums)
    {
        set<int> s;

        for (auto num : nums)
        {
            s.insert(num);
            int reverse = 0;
            while (num != 0)
            {
                int temp = num % 10;
                reverse = reverse * 10 + temp;
                num /= 10;
            }
            s.insert(reverse);
        }
        return s.size();
    }
};