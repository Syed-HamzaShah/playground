#include <string>
using namespace std;

class Solution
{
public:
    bool isFreqSame(int freq1[], int freq2[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2)
    {
        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            freq[index]++;
        }

        int WindSize = s1.length();

        for (int i = 0; i < s2.length(); i++)
        {
            int windIdx = 0;
            int idx = i;
            int windFreq[26] = {0};

            while (windIdx < WindSize && idx < s2.length())
            {
                int index = s2[idx] - 'a';
                windFreq[index]++;
                windIdx++;
                idx++;
            }

            if (isFreqSame(freq, windFreq))
            {
                return true;
            }
        }
        return false;
    }
};