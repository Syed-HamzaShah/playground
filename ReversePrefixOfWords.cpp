#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int pointer = 0;
        int i = 0;

        for (; i < word.length(); i++)
        {

            if (word[i] == ch)
            {
                pointer++;
                break;
            }
        }

        if (pointer == 1)
            reverse(word.begin(), word.begin() + (i + 1));

        return word;
    }
};