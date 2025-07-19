class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() <= 1) return true;
        bool first = true;
        bool allUpper = true;
        bool allLower = true;

        if(isupper(word[0]) && isupper(word[1])){
            for(int i = 2; i < word.length(); i++){
                if(isupper(word[i])) continue;
                else {
                    allUpper = false;
                    break;
                }
            }    
        }
        else if(isupper(word[0])){
            for(int i = 1; i < word.length(); i++){
                if(isupper(word[i])){
                    first = false;
                    break;
                }
            }
        }
        else{
            for(int i = 0; i < word.length(); i++){
                if(isupper(word[i])) {
                    allLower = false;
                    break;
                }
            }
        }
        
        return first && allUpper && allLower;
    }
};