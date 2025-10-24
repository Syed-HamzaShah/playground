class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int, string> m;

        for(int i = 0 ; i < s.length(); i++){
            string temp = "";
            while(i < s.size() &&s[i] != ' '){
                temp += s[i];
                i++;
            }
            int num = temp.back() - '0';
            temp.pop_back();
            m[num] = temp;
        }

        string ans = "";
        for (int i = 1; i <= m.size(); i++) {
            ans += m[i];
            if (i != m.size()) ans += " ";
        }
        return ans;
    }
};