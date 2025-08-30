class Solution {
public:
    bool isVowel(char character){
        char c =  tolower(character);
        if(c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u' ) return true;
        return false;    
    }
    bool halvesAreAlike(string s) {
        int mid = s.length() / 2;
        int index = 0;
        int leftHalf = 0;
        int rightHalf = 0;

        for(index; index < mid; index++)
            if(isVowel(s[index])) leftHalf++;

        for(index; index < s.length(); index++)
            if(isVowel(s[index])) rightHalf++;
        
        return leftHalf == rightHalf;
    }
};