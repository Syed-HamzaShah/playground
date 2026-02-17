class Solution {
public:
    string reverseByType(string s) {
        vector<char> letters;
        vector<char> specials;
        
        for(char c : s) {
            if(islower(c))
                letters.push_back(c);
            else
                specials.push_back(c);
        }
        
        reverse(letters.begin(), letters.end());
        reverse(specials.begin(), specials.end());
        
        int i = 0, j = 0;
        for(int k = 0; k < s.size(); k++) {
            if(islower(s[k]))
                s[k] = letters[i++];
            else
                s[k] = specials[j++];
        }
        
        return s;        
    }
};