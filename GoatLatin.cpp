class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string ans = "";
        string extraA = "a";

        while (ss >> word) {
            char ch = tolower(word[0]);

            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
                word = word.substr(1) + word[0];

            word += "ma";
            word += extraA;
            ans += word + " ";
            extraA += "a";
        }

        ans.pop_back();
        return ans;
    }
};