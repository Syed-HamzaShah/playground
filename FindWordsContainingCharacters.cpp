class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            string temp = words[i];
            for (auto t : temp)
            {
                if (t == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};