#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;

        unordered_set<int> s;

        while (n != 0)
        {
            int num = n % 2;
            if (s.find(1) != s.end())
                return false;

            n /= 2;
            s.insert(num);
        }

        return true;
    }
};