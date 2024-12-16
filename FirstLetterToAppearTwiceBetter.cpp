#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    char repeatedCharacter(string a)
    {
        vector<int> frequency(26, 0);

        for (char val : a)
        {
            if (frequency[val - 'a'] == 1)
                return val;
            else
                frequency[val - 'a']++;
        }
        return 'a';
    }
};