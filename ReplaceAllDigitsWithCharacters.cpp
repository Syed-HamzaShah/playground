class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        for(int i = 1; i < s.length(); i += 2){
            ans += s[i-1];
            ans += char(s[i-1] + (s[i] - '0'));
        }
        if (s.size() % 2 == 1) ans += s.back();
        
        return ans;
    }
};