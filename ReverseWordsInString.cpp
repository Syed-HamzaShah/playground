#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int size = s.length();
        string ans = "";

        reverse(s.begin(), s.end());

        for (int i = 0; i < size; i++)
        {
            string word = "";

            while (i < s.length() && s[i] != ' ')
            {
                word = word + s[i];
                i++;
            }

            reverse(word.begin(), word.end());
            if (word.length() > 0)
                ans = ans + " " + word;
        }
        return ans.substr(1);
    }
};