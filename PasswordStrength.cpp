class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        unordered_set<char> pass;

        for(char p: password)
            pass.insert(p);

        for(char p: pass){
            if(p >= 'a' && p <= 'z') ans++;
            else if(p >= 'A' && p <= 'Z') ans += 2;
            else if(p >= '0' && p <= '9') ans += 3;
            else ans += 5;
        }
        
        return ans;
    }
};