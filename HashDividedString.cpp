class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";

        for (int i = 0; i < s.length(); i += k) {
            int sum = 0;

            for (int j = i; j < i + k; j++) {
                sum += s[j] - 'a';
            }

            sum %= 26;

            ans += char(sum + 'a');
        }

        return ans;
    }
};