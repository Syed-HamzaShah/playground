class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";

        while(s.length() < k){
            string temp = "";
            for(auto c : s)
                temp += (char)(c + 1);
            s += temp;    
        }

        return s[k-1];
    }
};