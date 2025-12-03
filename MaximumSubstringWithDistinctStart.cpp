class Solution {
public:
    int maxDistinct(string s) {
        set<int> SET;
        for(auto &c: s)
            SET.insert(c);
        return SET.size();
    }
};