class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);

        string mx = s;
        char toReplaceMax = 0;

        for (char c : s) {
            if (c != '9') {
                toReplaceMax = c;
                break;
            }
        }

        if (toReplaceMax != 0) {
            for (char &c : mx) {
                if (c == toReplaceMax)
                    c = '9';
            }
        }

        string mn = s;
        char toReplaceMin = s[0];

        for (char &c : mn) {
            if (c == toReplaceMin)
                c = '0';
        }

        return stoi(mx) - stoi(mn);
    }
};
