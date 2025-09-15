class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> s;
        for(auto &letter: brokenLetters)
            s.insert(letter);

        int ans = 0;

        for(int i = 0 ; i < text.length(); i++){
            bool broken = false;

            while(i < text.length() && text[i] != ' '){
                if(s.find(text[i]) != s.end())
                    broken = true;
                i++;
            }

            if(!broken) ans++;
        }

        return ans;
    }
};