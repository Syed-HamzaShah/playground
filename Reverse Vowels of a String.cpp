class Solution {
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }

public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() -1;

        while(i <= j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i])){
                j--;
            }
            else{
                i++;
            }
        }
        return s;
    }
};