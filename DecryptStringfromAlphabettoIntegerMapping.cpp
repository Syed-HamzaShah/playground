class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for(int i = s.length()-1; i >=0; i--){
            if(s[i] != '#') ans += s[i] + '0';
            else { 
                i--;
                int temp = s[i] - '0'; 
                i--;
                temp += (s[i] - '0') * 10; 
                ans += char(temp + 96);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};