class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        int ans = 0;

        for (char c : s) 
            temp += to_string(c - 'a' + 1);

        for (int i = 0; i < k; i++) {
            ans = 0;

            for (char c : temp)
                ans += c - '0';

            temp = to_string(ans);
        }

        return ans;
    }
};