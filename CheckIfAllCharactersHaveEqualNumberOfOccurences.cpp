class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(auto &c: s) m[c]++;
        
        unordered_set<int> freq;
        for(auto &[first, second]: m) freq.insert(second);
           
        return freq.size() == 1;
    }
};