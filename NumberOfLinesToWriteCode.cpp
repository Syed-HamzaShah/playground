class Solution {
public:
    vector<int> numberOfLines(const vector<int>& widths, string s) {
        int lines = 1;
        int lastLineScore = 0;

        for (char c : s) {
            int w = widths[c - 'a'];

            if (lastLineScore + w > 100) {
                lines++;
                lastLineScore = w;
            } else {
                lastLineScore += w;
            }
        }

        return {lines, lastLineScore};
    }
};
