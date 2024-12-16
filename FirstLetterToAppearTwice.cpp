#include <unordered_set>
#include <string>
using namespace std;
class Solution
{
public:
    char repeatedCharacter(string a)
    {
        unordered_set<char> s;
        for (char val : a)
        {
            if (s.find(val) != s.end())
                return val;
            s.insert(val);
        }
        return 'a';
    }
};