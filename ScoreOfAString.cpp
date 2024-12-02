#include <string>
using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {
        if (s.length() <= 1)
            return 0;
        int score = 0;

        for (int i = 1; i < s.length(); i++)
        {
            int sum = ((s[i - 1]) - (s[i]));
            if (sum < 0)
                score += (-1 * sum);
            else
                score += sum;
        }

        return score;
    }
};