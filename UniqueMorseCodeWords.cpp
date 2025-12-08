class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        unordered_map<char, string> m = {
            {'a', ".-"},
            {'b', "-..."},
            {'c', "-.-."},
            {'d', "-.."},
            {'e', "."},
            {'f', "..-."},
            {'g', "--."},
            {'h', "...."},
            {'i', ".."},
            {'j', ".---"},
            {'k', "-.-"},
            {'l', ".-.."},
            {'m', "--"},
            {'n', "-."},
            {'o', "---"},
            {'p', ".--."},
            {'q', "--.-"},
            {'r', ".-."},
            {'s', "..."},
            {'t', "-"},
            {'u', "..-"},
            {'v', "...-"},
            {'w', ".--"},
            {'x', "-..-"},
            {'y', "-.--"},
            {'z', "--.."}
        };

        for(int i = 0; i < words.size(); i++){
            string temp = "";
            for(int j = 0; j < words[i].size(); j++){
                temp += m[words[i][j]];
            }
            s.insert(temp);
        }    

        return s.size();
    }
};