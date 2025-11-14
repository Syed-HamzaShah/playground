class Solution {
public:
    string decodeMessage(string key, string message) {
        char alphabet = 'a';
        unordered_map<char, char> m;

        for (char c : key) {
            if (c != ' ' && m.find(c) == m.end()) {
                m[c] = alphabet;
                alphabet++;
            }
        }

        string ans = "";
        for (char c : message) {
            if (c == ' ')
                ans += ' ';
            else
                ans += m[c];
        }

        return ans;
    }
};