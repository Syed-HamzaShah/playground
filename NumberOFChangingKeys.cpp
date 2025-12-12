class Solution {
public:
    int countKeyChanges(string s) {
        for (char &c : s) 
            c = tolower(c);

        int ans = 0;
        for(int i = 1; i < s.length(); i++)
            if(s[i] != s[i-1])
                ans++;
        
        return ans;
    }
};