class Solution {
public:
    int numSteps(string s) {
        int steps = 0;

        while (s != "1") {
            if (s.back() == '0') {
                // Even → divide by 2
                s.pop_back();
            } else {
                // Odd → add 1
                int i = s.length() - 1;

                // Handle carry
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }

                if (i >= 0) {
                    s[i] = '1';
                } else {
                    // All were 1s → prepend 1
                    s = "1" + s;
                }
            }
            steps++;
        }

        return steps;
    }
};