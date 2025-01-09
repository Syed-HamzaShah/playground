#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int ans = 0;

        for (int i = 0; i < words.size(); i++)
        {
            string temp = words[i];
            bool correct = false;
            if (pref.length() > temp.length())
                continue;
            for (int j = 0; j < pref.size(); j++)
            {
                if (temp[j] == pref[j])
                {
                    correct = true;
                    continue;
                }
                else
                {
                    correct = false;
                    break;
                }
            }
            if (correct)
                ans++;
        }
        return ans;
    }
};