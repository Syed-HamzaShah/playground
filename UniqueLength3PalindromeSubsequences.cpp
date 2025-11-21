class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string> ans;
        unordered_map<char, int> m;
        unordered_set<char> S;

        for(auto &c: s)
            m[c]++;

        for(int i = 0; i < s.length(); i++){
            char temp = s[i];
            m[temp]--;

            for (char c = 'a'; c <= 'z'; c++) {
                if (S.count(c) && m[c] > 0) {
                    string t = "";
                    t.push_back(c);
                    t.push_back(temp);
                    t.push_back(c);
                    ans.insert(t);
                }
            }
            S.insert(temp);
        }
        
        return ans.size();
    }
};