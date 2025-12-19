class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> setOfCharacters;

        for(char c: s)
            setOfCharacters.insert(c);
        
        return setOfCharacters.size();
    }
};