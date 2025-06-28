class Solution {
    vector<string> ans;

    void backtrack(string temp, int open, int close, int n) {
        if (temp.length() == 2 * n) {
            ans.push_back(temp);
            return;
        }

        if (open < n)
            backtrack(temp + "(", open + 1, close, n);

        if (close < open)
            backtrack(temp + ")", open, close + 1, n);
    }

public:
    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return ans;
    }
};
