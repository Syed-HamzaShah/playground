#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int size = chars.size();
        int index = 0;

        for (int i = 0; i < size; i++)
        {
            char ch = chars[i];
            int count = 0;

            while (i < size && chars[i] == ch)
            {
                count++;
                i++;
            }

            if (count == 1)
            {
                chars[index] = ch;
                index++;
            }
            else
            {
                chars[index] = ch;
                index++;
                string str = to_string(count);
                for (char digit : str)
                {
                    chars[index] = digit;
                    index++;
                }
            }
            i--;
        }
        chars.resize(index);
        return index;
    }
};