class Solution {
public:
    int minimumPushes(string word) {
        if(word.length() <= 8) return word.length();
        else if(word.length() <= 16) return 8 + ((word.length() - 8) * 2);
        else if(word.length() <= 24) return 8 + 16 + ((word.length() - 16) * 3);
        else return 8 + 16 + 24 + ((word.length() - 24) * 4);
        return -1;
    }
};