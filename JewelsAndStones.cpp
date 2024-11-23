#include <unordered_set>
#include <string>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> s;
        int ans = 0;

        for (char jewel : jewels)
        {
            s.insert(jewel);
        }

        for (char stone : stones)
        {
            if (s.find(stone) != s.end())
                ans++;
        }
        return ans;
    }
};