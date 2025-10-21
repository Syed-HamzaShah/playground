class Solution {
public:
    string makeSmallestPalindrome(string s) {
        string ans = "";
        int i = 0;
        int j = s.length() -1;

        while(i <= j){
            if(s[i] > s[j]) ans += s[j];
            else ans += s[i];
            i++;
            j--;
        }
        while(j >= 0){
            ans += ans[j];
            j--;
        }
        return ans;
    }
};