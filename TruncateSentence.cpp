class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream stream(s);
        string word;
        string ans = "";
        int words = 0;

        while(stream >> word){
            if(words == k) return ans;
            ans += word;
            words++;
            if(words == k) return ans;
            ans += " ";
        }

        return s;
    }
};