#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else
            {
                for (int j = i; j >= 0; j--)
                {
                    if (s[j] == ' ')
                        return count;
                    else
                        count++;
                }
                break;
            }
        }
        return count;
    }
};