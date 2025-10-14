class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        string word;
        
        // Combine both sentences
        stringstream ss(s1 + " " + s2);
        
        // Count all words
        while (ss >> word) {
            m[word]++;
        }

        // Collect words that appear exactly once
        vector<string> ans;
        for (auto &[w, count] : m) {
            if (count == 1)
                ans.push_back(w);
        }
        
        return ans;
    }
};
