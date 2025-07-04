class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count frequency of each character
        unordered_map<char, int> freqMap;
        for (char ch : s) {
            freqMap[ch]++;
        }

        // Step 2: Copy map to a vector of pairs (char, frequency)
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());

        // Step 3: Sort vector by frequency in descending order
        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; // higher frequency comes first
        });

        // Step 4: Build the result string
        string result = "";
        for (const auto& entry : freqVec) {
            char ch = entry.first;   // the character
            int freq = entry.second; // its frequency

            result.append(freq, ch); // add 'ch' 'freq' times
        }

        return result;
    }
};
