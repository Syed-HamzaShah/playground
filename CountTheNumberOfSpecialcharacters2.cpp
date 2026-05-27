class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> smallIndex(26 ,-1);
        vector<int> capitalIndex(26 ,-1);
        int ans = 0;

        for(int i = 0; i < word.length(); i++){
            char c = word[i];
            if(islower(c))
                smallIndex[c - 'a'] = i;
            else
                if(capitalIndex[c - 'A'] == -1)
                    capitalIndex[c - 'A'] = i;
        }

        for(int i = 0; i < 26; i++)
            if(smallIndex[i] != -1 && capitalIndex[i] != -1 && smallIndex[i] < capitalIndex[i])
                ans++;

        return ans;
    }
};