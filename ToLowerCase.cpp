#include <string>
using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (char &val : s)
        {
            if (val >= 'A' && val <= 'Z')
            {
                val = val + 32;
            }
        }
        return s;
    }
};