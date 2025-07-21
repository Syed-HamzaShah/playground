class Solution {
public:
    string makeFancyString(string s) {
        if(s.length() < 3) return s;
        string ans = "";
        int size = s.length() -1;
        for(int i = 2; i < s.length(); i++){
            if(s[i] == s[i-1] && s[i] == s[i-2]) continue;
            else ans += s[i-2];
        }
        ans += s[size -1];
        return ans += s[size];
    }
};