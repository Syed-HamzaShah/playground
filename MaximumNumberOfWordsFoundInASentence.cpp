#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int words = 1;
        for (int i = 0; i < sentences.size(); i++)
        {
            int space = 1;
            string temp = sentences[i];
            for (int i = 0; i < temp.size(); i++)
            {
                if (temp[i] == ' ')
                    space++;
            }
            words = max(space, words);
        }
        return words;
    }
};