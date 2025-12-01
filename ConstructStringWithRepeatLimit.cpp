class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string ans = "";
        int i = 25, j = 24;

        while (i >= 0) {
            if (freq[i] == 0) {
                i--;
                j = i - 1;
                continue;
            }

            int use = min(freq[i], repeatLimit);
            ans.append(use, char(i + 'a'));
            freq[i] -= use;

            if (freq[i] > 0) {
                j = i - 1;
                while (j >= 0 && freq[j] == 0) j--;

                if (j < 0) break;

                ans += char(j + 'a');
                freq[j]--;
            }
        }

        return ans;
    }
};
