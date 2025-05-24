class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int ans = 0;
        unordered_set<char> s;

        for (char ch : allowed)
        {
            s.insert(ch);
        }
        for (int i = 0; i < words.size(); i++)
        {
            bool consistent = true;
            for (int j = 0; j < words[i].size(); j++)
            {
                if (s.find(words[i][j]) == s.end())
                {
                    consistent = false;
                    break;
                }
            }
            if (consistent)
            {
                ans++;
            }
        }

        return ans;
    }
};
