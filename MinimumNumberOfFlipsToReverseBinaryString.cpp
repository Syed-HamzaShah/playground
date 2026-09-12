class Solution {
public:
    int minimumFlips(int n) {
        string s;

        while (n > 0) {
            s += char('0' + (n & 1));
            n >>= 1;
        }

        int ans = 0;
        int i = 0;

        string s2(s.rbegin(), s.rend());

        while (i < s.length()) {
            if (s[i] != s2[i]) {
                ans++;
            }
            i++;
        }

        return ans;
    }
};