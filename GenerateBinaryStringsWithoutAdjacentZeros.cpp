class Solution
{
    vector<string> ans;

public:
    void backtrack(int n, string s)
    {
        if (s.length() == n)
        {
            ans.push_back(s);
            return;
        }

        if (s.length() == 0 || s.back() == '1')
            backtrack(n, s + "0");

        backtrack(n, s + "1");

        return;
    }
    vector<string> validStrings(int n)
    {
        backtrack(n, "");
        return ans;
    }
};