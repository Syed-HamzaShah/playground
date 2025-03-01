class Solution
{
public:
    int romanToInt(string s)
    {
        int num = 0;
        unordered_map<char, int> table = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length() && table[s[i]] < table[s[i + 1]])
                num -= table[s[i]];
            else
                num += table[s[i]];
        }

        return num;
    }
};