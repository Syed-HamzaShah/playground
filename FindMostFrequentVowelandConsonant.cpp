#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxFreqSum(string s)
    {
        unordered_map<char, int> m; // vowel frequencies
        unordered_map<char, int> n; // consonant frequencies

        for (char c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                m[c]++;
            }
            else
            {
                n[c]++;
            }
        }

        int x = 0; // max vowel frequency
        for (auto &l : m)
        {
            x = max(x, l.second);
        }

        int y = 0; // max consonant frequency
        for (auto &l : n)
        {
            y = max(y, l.second);
        }

        return x + y;
    }
};
