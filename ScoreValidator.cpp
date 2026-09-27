class Solution {
public:
    vector<int> scoreValidator(vector<string>& a) {
        int s = 0, c = 0;

        for(size_t i = 0; i < a.size() && c < 10; ++i) {
            if(a[i] == "WD" || a[i] == "NB") ++s;
            else if(a[i] == "W") ++c;
            else s += a[i][0]-'0';
        }

        return {s, c};
    }
};