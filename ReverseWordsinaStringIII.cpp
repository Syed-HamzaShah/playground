class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string word = "";

        for(char c : s){
            if(c == ' '){
                reverse(word.begin(), word.end());
                result += word;
                result += ' ';
                word.clear();
            }
            else{
                word += c;
            }
        }
        reverse(word.begin(), word.end());
        result += word;
        
        return result;
    }
};