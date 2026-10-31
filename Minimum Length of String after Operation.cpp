class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> m;
        int ans = 0;

        for(char c : s)
            m[c]++;

        for(auto [first, second] : m) {
            if(second < 3)
                ans += second;
            else {
                while(second >= 3) {
                    second -= 2;
                }
                ans += second;
            }
        }

        return ans;
    }
};