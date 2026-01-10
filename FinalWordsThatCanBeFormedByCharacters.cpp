class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> m;

        for(char c : chars)
            m[c]++;

        int ans = 0;

        for(string &word : words) {
            unordered_map<char, int> mTemp;
            for(char c : word)
                mTemp[c]++;

            bool valid = true;
            for(auto &[ch, cnt] : mTemp) {
                if(m[ch] < cnt) {
                    valid = false;
                    break;
                }
            }

            if(valid)
                ans += word.length();
        }

        return ans;
    }
};
