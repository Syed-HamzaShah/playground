class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'};
        set<char> row2 = {'a','s','d','f','g','h','j','k','l'};
        set<char> row3 = {'z','x','c','v','b','n','m'};
        
        vector<string> ans;

        for (string w : words) {
            string word = w;
            for (char &ch : word) {
                ch = tolower(ch);
            }

            set<char>* activeRow;
            if (row1.count(word[0])) activeRow = &row1;
            else if (row2.count(word[0])) activeRow = &row2;
            else activeRow = &row3;

            bool valid = true;
            for (char ch : word) {
                if (!activeRow->count(ch)) {
                    valid = false;
                    break;
                }
            }

            if (valid) ans.push_back(w);
        }

        return ans;
    }
};
