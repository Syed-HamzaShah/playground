#include <string>
using namespace std;

class Solution
{
public:
    string clearDigits(string s)
    {
        for (int i = 0; i < s.length();)
        {
            if (isdigit(s[i]))
            {
                s.erase(--i, 2);
            }
            else
                i++;
        }
        return s;
    }
};