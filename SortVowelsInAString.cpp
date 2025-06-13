class Solution {
public:
    string sortVowels(string s) {
        vector<char> c;
        for(auto ch: s){
            if(ch == 'a' ||
               ch == 'A' ||
               ch == 'e' ||
               ch == 'E' ||
               ch == 'i' ||
               ch == 'I' ||
               ch == 'o' ||
               ch == 'O' ||
               ch == 'u' ||
               ch == 'U' )
                c.push_back(ch);
        }
        sort(c.begin(),c.end());

        string ans = "";
        int i = 0;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == 'a' ||
               s[j] == 'A' ||
               s[j] == 'e' ||
               s[j] == 'E' ||
               s[j] == 'i' ||
               s[j] == 'I' ||
               s[j] == 'o' ||
               s[j] == 'O' ||
               s[j] == 'u' ||
               s[j] == 'U' ) {
                ans += c[i];
                i++;
            }
            else ans += s[j];
        }
        return ans;
    }
};